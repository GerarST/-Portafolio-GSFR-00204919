#include <iostream>
#include <string>

using namespace std;

struct Orden{
    int mesa, cantidadAlitas, tiempo;
    string mesero;
};

typedef Orden Or;
const Or noValido = {-1, -1, -1, {""}};

struct Nodo{
    Or pedido;
    Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

struct Restaurante{
    Cola ColaDePedidos;
    int AlitasHechas;
};
Restaurante BuffaloWings;

void initialize(Cola *q);
bool empty(Cola *q);
Or front(Cola *q);
Or back(Cola *q);
void AgregarACola(Cola *q, Or x);
Or BorrardeCola(Cola *q);
int size(Cola *q);

void AgregarOrden();
void VerOrden();
void ServirOrden();
void VerOrdenes();

int main(){

}

// Implementacion de funciones
void initialize(Cola *q){
    q->frente = NULL;
    q->final = NULL;
}

bool empty(Cola *q){
    return (q->frente==NULL) ? true : false;
}

Or front(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    return (q->frente)->pedido;
}

Or back(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    return (q->final)->pedido;
}

void AgregarACola(Cola *q, Or x){
    Nodo *unNodo = new Nodo;
    unNodo->pedido = x;
    unNodo->siguiente = NULL;
    
    if(q->final==NULL)
        q->frente = unNodo;
    else
        (q->final)->siguiente = unNodo;
        
    q->final = unNodo;
}

Or BorrardeCola(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        return noValido;
    }
    Nodo *unNodo = q->frente;
    Or x = unNodo->pedido;
    q->frente = unNodo->siguiente;
    if(q->frente==NULL)
        q->final = NULL;
    delete(unNodo);
    return x;
}

int size(Cola *q){
    Cola colaTemporal;
    initialize(&colaTemporal);
    
    int contador = 0;
    // Transfiriendo desde q hasta colaTemporal
    while(!empty(q)){
        Or elemento = BorrardeCola(q);
        AgregarACola(&colaTemporal, elemento);
        contador++;
    }
    // Transfiriendo desde colaTemporal hasta q
    while(!empty(&colaTemporal)){
        Or elemento = BorrardeCola(&colaTemporal);
        AgregarACola(q, elemento);
    }
    return contador;
}

void AgregarOrden(){
    Orden unaOrden;
    cout << "\nNumero de mesa: "; cin >> unaOrden.mesa; cin.ignore();
    cout << "\nCantidad de alitas: "; cin >> unaOrden.cantidadAlitas; cin.ignore();
    cout << "\nMesero: "; getline(cin, unaOrden.mesero); cin.ignore();
    cout << "\nTimepo de espera: "; cin >> unaOrden.tiempo; cin.ignore();


    
    /*int mesa, cantidadAlitas, tiempo;
    string mesero;*/
}