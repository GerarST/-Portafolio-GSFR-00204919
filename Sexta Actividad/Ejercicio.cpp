#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct plato{
    string material, color;
};
typedef plato Plato;

stack <Plato> Pila;
stack <Plato> CopiadePila;
Plato RecorrerPila(stack <Plato> Pila);

int main(){
    Plato unPlato;
    char sel;
    do{
        cout << "Ingresar un plato? (SI = s, NO = n)"; cin >> sel; cin.ignore();
        if(sel == 's' || sel == 'S'){
            cout << "Ingrese el color del plato: "; getline(cin, unPlato.color); cout << endl; 
            cout << "Ingrese el material del plato: "; getline(cin, unPlato.material); cout << endl; 
            Pila.push(unPlato);
        }
    }while(sel == 's' || sel == 'S');

    cout << "El color del primer plato de la pila es: " << Pila.top().color << endl;
    cout << "El material del primer plato de la pila es: " << Pila.top().material << endl;
    cout << "El color del ultimo plato de la pila es: " << RecorrerPila(Pila).color << endl;
    cout << "El material del ultimo plato de la pila es: " << RecorrerPila(Pila).material << endl;
    
    return 0;
}

Plato RecorrerPila(stack <Plato> Pila){
    CopiadePila = Pila;
    Plato aux;
    while(!Pila.empty()){
        aux = Pila.top();
        CopiadePila.push(aux);
        Pila.pop();
    }
    return aux;
}