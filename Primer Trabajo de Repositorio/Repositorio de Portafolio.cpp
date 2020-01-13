#include <iostream>
using namespace std;

float mediana(int *p, int tamano);

int main(){
    float med=0;
    int tamano=5;
    int array[tamano]={1,3,5,7,9};
    
    med = mediana(array,tamano);
    
    cout <<"El valor de la mediana es de: "<< med <<endl;
    
}

float mediana(int *p, int tamano){
int aux=0;
float valor=0;

if(tamano % 2 == 0){

     aux=tamano/2;
     valor=(p[aux-1]+p[aux])/2;

}
else{

    aux=tamano/2;
    valor=p[aux]; 

}
   return valor;
}