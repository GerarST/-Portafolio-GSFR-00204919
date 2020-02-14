#include <iostream>
#include <string>
#include <stack>
using namespace std;

enum contenido {soda, cerveza, jugo};

struct latas{
    contenido Contenido;
    string marca;
};
typedef latas Latas;

stack <Latas> PiladeLatas;

int main(){
    Latas unaLata;
    int cont = 0;
    cout << "Ingrese el contenido que quiere de la lata:";
    cout << "\n 1. Soda \n 2. Cerveza \n 3. Jugo \nOpcion: "; cin >> cont;
        switch (cont)
        {
        case 1:
            cont = soda;
            break;
        case 2:
            cont = cerveza;
            break;
        case 3:
            cont = jugo;
            break;
        }
    cout << "\nIngrese la marca: "; getline(cin, unaLata.marca);
    PiladeLatas.push();
}