#include <iostream>
#include <string>
using namespace std;

int cantPaises = 0;

struct continente{
  string nombre;
  string capital;
  int numHab;
  int promEdad;

};
typedef struct continente pais[5];

void ingreso(continente &pais);
void PoblacionT(continente &pais);
void CapT(continente &pais);

int main(){
  int opcion = 0;
  continente pais[5];
    do{
      cout << "\n\t\t Menu de opciones.";
      cout << "\n\t 1> Ingresar un nuevo pais.";
      cout << "\n\t 2> Ver poblacion total del continente.";
      cout << "\n\t 3> Ver capital con mayor poblacion.";
      cout << "\n\t 4> Promedio de edad de continente.";
      cout << "\n\t 5> Salir.";
      cout << "\n\t Opcion: ";
        cin >> opcion;
        cin.ignore();
        switch (opcion){
        case 1:
          ingreso(*pais);
        break;
        case 2:
          PoblacionT(*pais);
        break;
        case 3:
          CapT(*pais);
        break;
        default:
          break;
        }
      
    }while(opcion > 0 && opcion < 4);

    return 0;
}

void ingreso(continente &pais){
    int opcion = 0;
      do{
        cout << "\n\n\tDigite el nombre del pais: ";
        getline(cin, pais.nombre);
        cout << "\n\tDigite la capital: ";
        getline(cin, pais.capital);
        cout << "\n\tDigite la cantidad de habitantes: ";
        cin >> pais.numHab; cin.ignore(); 
        cout << "\n\tDigite el promedio de edad: ";
        cin >> pais.promEdad;
        cin.ignore();

          cout << "\n Desea ingresar un nuevo pais?\n Si: 1 , No: 2 \n";
          cin >> opcion;
          cin.ignore();
      }while(opcion != 2);
}

void PoblacionT(continente &pais){ 
    int PoblaT = 0;
    PoblaT += pais.numHab;
    cout << "\n\tLa cantidad total de habitantes es de: " << PoblaT << endl;
}

void CapT(continente &pais){
    int CapT = 0;
    do{
          if(CapT < pais.numHab){
            CapT = pais.numHab;
          }
      }while(CapT < pais.numHab);
        cout << "La capital con mayor cantidad de habitantes es : " << CapT << endl;
}