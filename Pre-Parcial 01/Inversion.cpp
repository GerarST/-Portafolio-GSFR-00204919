#include <iostream>
using namespace std;

void invert(int n, int *A, int *B);

int main(){

//PROBLEMA A: Literal 1.
    /*int n=0;
    int array[n];
    cout<<"Ingrese el tamano del arreglo: "; cin >> n;
    if (n < 2)
    {
        cout << "El tamano del arreglo debe de ser mayor o igual que 2!\n";
        return 0;
    }*/


//PROBLEMA A: Literal 2.
    int n=5;
    int A[n];
    int B[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese numero de posicion ["<<i+1<<"]: "; cin >> A[i];
    }
    

//PROBLEMA A: Literal 3.
      invert(n, A, B);
      
    return 0;   
}

void invert(int n, int *A, int *B){

    int aux = 0;
     for (int i = n - 1; i >= 0; i--)
     {
         B[aux] = A[i];  
         aux++;
     }

     for (int i = 0; i < n; i++)
     {
         cout << "\nArreglo A, posicion "<<i+1<<": "<< A[i];
     }

     for (int i = 0; i < n; i++)
     {
        cout << "\nArreglo B, posicion "<<i+1<<": "<< B[i];
     }

}