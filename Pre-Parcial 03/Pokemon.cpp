#include <iostream>
#include <string>
using namespace std;

enum Tipo{agua, fuego, veneno};

struct Pokemon{
    string nombre;
    int Indice;
    Tipo tipo1, tipo2;
};

struct nodo{
    Pokemon pokemon;
    nodo* left, *right;
};

nodo* Cleaf(Pokemon);
void InsertarEnArbol(nodo** arbol, Pokemon pokemon);
void inOrder(nodo* pArbol);

int main(){
    nodo* Arbol = NULL;
    Pokemon pokemonn;
    char opcion;
    int sel = 0;
        cout << "Desea ingresar un pokemon? \nSi: 1, No: 0\nOpcion:"; 
        cin >> opcion; cin.ignore();
    do{
        cout << "\nNombre: "; getline(cin, pokemonn.nombre);
        cout << "Numero: "; cin >> pokemonn.Indice;
        cout << "Tipo: \n A: Agua - F: Fuego - V: Veneno\n";
        cin >> opcion; cin.ignore();
            switch (opcion)
            {
            case 'A':
            case 'a':
                pokemonn.tipo1 = agua;
                break;
            case 'F':
            case 'f':
                pokemonn.tipo1 = fuego;
                break;
            case 'V':
            case 'v':
                pokemonn.tipo1 = veneno;
                break;
            default: cout << "Error";
                break;
            }
        cout << "Desea ingresar un tipo mas? Si: s - No: n\n"; 
        cin >> opcion; cin.ignore();
            if(opcion == 's'){     
                cout << "Tipo: \n A: Agua - F: Fuego - V: Veneno\n";
                cin >> opcion; cin.ignore();
                switch (opcion){
                case 'A':
                case 'a':
                    pokemonn.tipo2 = agua;
                    break;
                case 'F':
                case 'f':
                    pokemonn.tipo2 = fuego;
                    break;
                case 'V':
                case 'v':
                    pokemonn.tipo2 = veneno;
                    break;
                default: cout << "Error";
                    break;
                }
            }
        InsertarEnArbol(&Arbol, pokemonn);
        cout << "Desea ingresar un pokemon? \nSi: 1, No: 0\nOpcion:"; 
        cin >> sel; cin.ignore();

    }while(sel != 0);
    
    inOrder(Arbol);

    return 0;
}

nodo* Cleaf(Pokemon pokemon){
    nodo* newleaf = new nodo;
    newleaf->pokemon = pokemon;
    newleaf->left = NULL;
    newleaf->right = NULL;

    return newleaf;
}

void InsertarEnArbol(nodo** arbol, Pokemon pokemon){
   
    if(!(*arbol))
        *arbol = Cleaf(pokemon);
    else{
        if(pokemon.Indice <= (*arbol)->pokemon.Indice)
            InsertarEnArbol(&(*(*arbol)).left, pokemon);
        else
            InsertarEnArbol(&(*(*arbol)).right, pokemon);   
    }
}

void inOrder(nodo* pArbol){
    if (!pArbol)
        return;
    else{
        inOrder(pArbol->left);
        cout << "Nombre: "<<pArbol->pokemon.nombre << "\n";
        cout << "Indice: "<<pArbol->pokemon.Indice << "\n";
        cout << "Tipo 1: "<< " ";
        switch (pArbol->pokemon.tipo1)
        {
        case agua:
            cout << "Agua";
            break;
        case fuego:
            cout << "Fuego";
            break;
        case veneno:
            cout << "Veneno"; 
            break;
        default: cout << "Error";
            break;
        }
        cout << "\nTipo 2: "<< " ";
        switch (pArbol->pokemon.tipo2)
        {
        case agua:
            cout << "Agua";
            break;
        case fuego:
            cout << "Fuego";
            break;
        case veneno:
            cout << "Veneno"; 
            break;
        default: cout << "Error";
            break;
        }
        inOrder(pArbol->right);
    }
}
