#include <iostream>
#include <string>
using namespace std;

struct DatosP{
   string name;
   float peso; 
   int anios;
   char Gen;
};
struct DatosP Datos[6];

void Reproduccion();

int main(){

   for (int i = 0; i < 6; i++)
   {         
        cout << "\tIngrese los datos del pavo "<<i+1<<": \n";  
        cout << "Nombre: "; getline(cin, Datos[i].name); 
        cout << "\nPeso: "; cin >> Datos[i].peso;
        cout << "\nAnios: "; cin >> Datos[i].anios;
        cout << "\nGenero: "; cin >> Datos[i].Gen;
        cin.ignore();
   }
    Reproduccion();
}

void Reproduccion(){

    int cant = 0;
    for (int i = 0; i < 6; i++)
    {
        if(Datos[i].Gen == 'H' || Datos[i].Gen == 'h' && Datos[i].anios >= 2){

           cant++;

        }
    }
        cout << "\nLa cantidad de pavos que pueden tener hijos es de: "<<cant<<endl;

}