#include <iostream>
using namespace std;

int main(){
    
     int matriz1[2][2];
     int matriz2[2][2];
 
     //LLENANDO MATRICES
     cout<<"Llenando la matriz 1: \n";

       for(int i = 0; i < 2; i++){ 
           cin.ignore();
           cout << "Fila ["<<i+1<<"] , ";
        for(int j = 0; j < 2; j++){
            cout << "Columna ["<<j+1<<"]: ";
            cin >> matriz1[i][j];
        }
    }
     cout<<"\nLlenando la matriz 2: \n";

       for(int i = 0; i < 2; i++){
           cout << "Fila ["<<i+1<<"]: ";
        for(int j = 0; j < 2; j++){
            cout << "Columna ["<<j+1<<"]: ";
        cin >> matriz2[i][j];
        }
    }
      //MOSTRANDO MATRICES
         cout<<"Mostrando la matriz 1: \n";

       for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 2; j++){
            cout << matriz1[i][j];
            }
            cout << endl;
        }
         cout<<"Mostrando la matriz 2: \n";

       for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 2; j++){
            cout << matriz2[i][j];
            }
            cout << endl;
        }
                    
       //SUMANDO MATRICES
       cout<<"La suma es: \n";
        for(int i = 0; i < 2; i++){ 
         for(int j = 0; j < 2; j++){
            cout << matriz1[i][j] + matriz2[i][j];
            }
            cout << endl;
        }
}