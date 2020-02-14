#include <iostream>
using namespace std;

int sumaT(int n);

int main(){

int num=0,valor=0;

cout<<"Ingrese el numero 'n': ";
cin>>num;

valor=sumaT(num);
cout<<"La suma de todos los numeros es de: "<<valor<<"\n";

}

int sumaT(int n){

if(n<1){
    return 0;
}
else{
return n + sumaT(n-1);
}

}