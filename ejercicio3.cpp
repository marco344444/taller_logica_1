/*Solicitar  a  una  persona  que escriba un  número  entero,  diga  cuales  son  los  tres siguientes  números
pares enteros  sucesivos;  a  continuación,  sume  los  números resultantes y su resultado multiplíquelo por 
el número ingresado.  Visualice todos los resultados.*/
#include<iostream>
using namespace std;
int main(){
int n,no,n1,n2,n3,sum,mul;
cout<<"ingrese un numero entero: ";cin>>n;
if(n%2==0){
    n1=n+2;
    n2=n1+2;
    n3=n2+2;
    cout<<"los siguientes tres pares son: "<<n1<<","<<n2<<","<<n3;
}else{
    no=n-1;
    n1=no+2;
    n2=n1+2;
    n3=n2+2;
    cout<<"los siguientes tres pares son: "<<n1<<","<<n2<<","<<n3;
}
sum=n1+n2+n3;
mul=sum*n;
cout<<"\nla suma de los 3 numeros pares luego del numero ingresado es: "<<sum;
cout<<"\nla multiplicacion de la anterior suma por el numero que usted ingreso es: "<<mul;
return 0;
}