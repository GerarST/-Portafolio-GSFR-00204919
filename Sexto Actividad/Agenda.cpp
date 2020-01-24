#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct actividad{
    string titulo, hora;
    int duracion;
};
typedef struct actividad Actividad;

struct actividad2{
    string titulo, hora;
    int duracion;
};
typedef struct actividad2 Actividadcopy;

queue <Actividad> ColaDeActividades;

void agregar();
void borrar();
void verActividades();
void borrarT();

int main(){
    int opcion = 0;
    do{ 
        cout << "\n1> Agregar una actividad.\n";
        cout << "2> Borrar una actividad.\n";
        cout << "3> Ver todas las actividades.\n";
        cout << "4> Borrar todas las actividades.\n";
        cout << "5> Salir.\n";
        cout << "Opcion: \n";
        cin >> opcion; cin.ignore();
        switch(opcion){
            case 1: agregar(); break;
            case 2: borrar(); break;
            case 3: verActividades(); break;
            case 4: borrarT(); break;
            case 5: return 0; break;
            default: cout << "Valor invalido!\n";
            break;
        }

    }while(opcion > 0 && opcion < 5);

    return 0;
}

void agregar(){
    Actividad unaActividad;
    cout << "\nIngrese el titulo de la actividad.\t"; getline(cin, unaActividad.titulo);
    cout << "\nIngrese la hora de la actividad.\t"; getline(cin, unaActividad.hora);
    cout << "\nIngrese la duracion de la actividad.\t"; cin >> unaActividad.duracion;
    cin.ignore();

    ColaDeActividades.push(unaActividad);
}

void borrar(){
    ColaDeActividades.pop();
}

void verActividades(){
    queue <Actividadcopy> ColaDeActividades2;
    while(!ColaDeActividades.empty()){
        Actividad printAct = ColaDeActividades.front();
        cout << "Titulo de la actividad: " << printAct.titulo << endl;
        cout << "Hora de la actividad: " << printAct.hora << endl;
        cout << "Duracion de la actividad: " << printAct.duracion << endl;
        ColaDeActividades.pop();
        ColaDeActividades2.push();
    }
}

void borrarT(){
    while(!ColaDeActividades.empty()){
        ColaDeActividades.pop();
    }
}