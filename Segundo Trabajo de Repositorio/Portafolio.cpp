#include <iostream>
using namespace std;

int main(){
     int *ma1=0;
     int n=0,m=0;
     int matriz1[2][2];
     int matriz2[2][2];
 
       for(int i = 0; i < 2; i++){
        cout << "NumeroF ["<<i + 1<<"] " << endl;
        for(int j = 0; j < 2; j++){
            cout << "NumeroC  ["<<j + 1<<"]: "; cin >> matriz1[i][j];
        }
    }
         for(int i = 0; i < 2; i++){
        cout << "NumeroF2 ["<<i + 1<<"] " << endl;
        for(int j = 0; j < 2; j++){
            cout << "NumeroC2  ["<<j + 1<<"]: "; cin >> matriz2[i][j];
            *ma1=**matriz2;
        }
    }
    cout<<"xd"<<ma1<<endl;
}