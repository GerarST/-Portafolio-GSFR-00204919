#include <iostream>
#include <string>
using namespace std;

struct continente{

  string nombre;
  string capital;
  int numHab;
  int promEdad;

};

struct continente pais[5];

int cantPaises = 0;
void ingreso();
int PoblacionT(continente pais);


int main(){

char opcion;
cout << "\n Desea ingresar un nuevo pais?\n Si:s , No:n \n";
cin >> opcion;
cin.ignore();

do{
ingreso();
}while(opcion=='n');

}


void ingreso(){

    if(cantPaises < 5){

        cout << "\nDigite el nombre: ";
        getline(cin, pais[cantPaises].nombre);
        cout << "\nDigite la capital: ";
        getline(cin, pais[cantPaises].capital);
        cout << "\nDigite la cantidad de habitantes: ";
        cin >> pais[cantPaises].numHab;
        cout << "\nDigite el promedio de edad: ";
        cin >> pais[cantPaises].promEdad;
        cin.ignore();
        
        cantPaises++;
    }
    else cout << "Espacio para pais insuficiente!\n";
}

int PoblacionT(continente pais){

for (int i = 0; i < pais; i++)
{
  /* code */
}


}