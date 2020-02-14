#include <iostream>
using namespace std;

int array[] = {1,3,4,5,17,18,31,33};
int menor = 0;
int mayor = 7;
int x = 3.5;
int mitad = 0;

int BusquedaBinaria(int *, int, int, int);

int main(){
    int num;
    num = BusquedaBinaria(array, mitad, menor, mayor);
    cout << num << endl;
}

int BusquedaBinaria(int *array, int mitad, int menor, int mayor){
    
        if(menor > mayor)
            return -1;
        else{
            mitad = (menor + mayor)/2;
            if(x == array[mitad])
                return array[mitad];

            if(x < array[mitad])
                 BusquedaBinaria(array, mitad, array[menor], array[mitad-1]);
            else
            {
                 BusquedaBinaria(array, mitad, array[mitad+1], array[mayor]);
            }
        }   
}