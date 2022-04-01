/*Solicite tres números y con ellos calcule:la suma del doble del primer número con el triple del segundo
menos la mitad del tercero. Repita esta operación 10 veces y en  cada  una  de  ella  imprima  los  números  
ingresados  y  el  valor  de  la  operación realizada.*/
#include<iostream>
using namespace std;
int main(){
    float n1,n2,n3,i,s;
    
for(i=0;i<10;i++){
    cout<<"\ningrese un numero: ";cin>>n1;
    cout<<"ingrese otro numero: ";cin>>n2;
    cout<<"ingrese otro numero: ";cin>>n3;
    s=(n1*2)+(n2*3)-(n3/2);
    cout<<"los numeros que usted ingreso son: "<<n1<<","<<n2<<","<<n3;
    cout<<"\nla suma del doble del primer numero con el triple del segundo menos la mitad del tercero es: "<<s; 
}
return 0;
}