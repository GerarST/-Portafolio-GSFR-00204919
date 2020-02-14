#include <iostream>
#include <string>
using namespace std;

struct Pedido{
    string Remitente, Destinatario;
    char Tipo, Modalidad;
    float Peso;
    Pedido* next;
};

Pedido* push(Pedido* Pedidos, string Remitente, string Destinatario, float Peso, char Tipo, char Modalidad);
float PagoTotal();
void InPedido(Pedido* unPedido);

int main(){
    Pedido* unPedido = NULL;
    InPedido(unPedido);
}

Pedido* push(Pedido* Pedidos, string Remitente, string Destinatario, float Peso, char Tipo, char Modalidad){
    Pedido* newPedido = new Pedido;
    newPedido->Remitente = Remitente;
    newPedido->Destinatario = Destinatario;
    newPedido->Peso = Peso;
    newPedido->Tipo = Tipo;
    newPedido->Modalidad = Modalidad;
    newPedido->next = NULL;

    if(!Pedidos)
        Pedidos = newPedido;
    else{
        Pedido* aux = Pedidos;

        while(aux->next != NULL)
            aux = aux->next;
        
        aux->next = newPedido;
    }
    return Pedidos;
}

float PagoTotal(Pedido* unPedido){
    int Total;

    if(!unPedido)
        return 0;
    else{
        if(unPedido->Tipo == 'C' || unPedido->Tipo == 'c'){
            if(unPedido->Modalidad == 'U' || unPedido->Modalidad == 'u')
                Total = 3;
            else if(unPedido->Modalidad == 'N' || unPedido->Modalidad == 'n')
                Total = 1;
            else{
                Total = 2;
            }
        }
        else{
            if(unPedido->Modalidad == 'U' || unPedido->Modalidad == 'u' && unPedido->Peso > 0 && unPedido->Peso < 500)
                Total = 10;
            else if(unPedido->Modalidad == 'U' || unPedido->Modalidad == 'u' && unPedido->Peso > 500)
                Total = 15;
            else if(unPedido->Modalidad == 'N' || unPedido->Modalidad == 'n')
                Total = 5;
            else if(unPedido > 0 && unPedido->Peso < 100)
                Total = 5;
            else if(unPedido->Peso > 500)
                Total = 10;
        }
        return Total + PagoTotal(unPedido->next);
    }
}

void InPedido(Pedido* unPedido){
    string Remitente = "", Destinatario = "";
    char Tipo, Modalidad;
    float Peso = 0;
    int opcion = 0;
    do{
        cout << "\n\t\t Datos del pedido.";
        cout << "\n\t Remitente: "; getline(cin, Remitente);
        cout << "\n\t Destinatario: "; getline(cin, Destinatario);
        cout << "\n\t Peso en gramos: "; cin >> Peso;
        cout << "\n\t Tipo: (C-carta, P-paquete)"; cin >> Tipo;
        cout << "\n\t Modalidad: (U-urgente, N-nacional, I-internacional)"; cin >> Modalidad;
        cout << "\n\t Salir (7):"; cin >> opcion;
        unPedido = push(unPedido, Remitente, Destinatario, Peso, Tipo, Modalidad);
    }while(opcion != 7);  
}