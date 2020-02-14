#include <iostream>
#include <string>
using namespace std;

struct vasos{
    string color, material;
    struct vasos *siguiente;
};
typedef struct vasos *Vaso;

void initialize(Vaso *v, string color, string materiañ);
void push(Vaso *v);
string pop(Vaso *v);
string top(Vaso *v);

int main(){
    Vaso unVaso;
    initialize(&unVaso);
    cout << "Contenido de unVaso: " << unVaso <<endl;

    cout << endl << "PUSH" << endl;
}

void initialize(Vaso *v){
    *v = NULL;
}

bool empty(Vaso *v){
    return *v == NULL;
}

void push(Vaso *v, string color, string material){
    vasos *unVaso;
    unVaso = new vasos;
    unVaso->color = color;
    unVaso->material = material;

    unVaso->siguiente = *v;
    *v = unVaso;
}

string pop(Vaso *v){
    if (!empty(v))
    {
        vasos *unVaso = *v;
        string color = (*v)->color;
        string material = (*v)->material;
        *v = (*v)->siguiente;
        delete(unVaso);
        return color, material;
    }
    else{
        return "Error!";
    }
}

string top(Vaso *v){
    if (!empty(v))
    {
        vasos *unVaso = *v;
        string color = (*v)->color;
        string material = (*v)->material;
        *v = (*v)->siguiente;
        return color, material;
    }
    else{
        return "Error!";
    }
}