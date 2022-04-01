/*Solicitar a una persona que digite un número entero, diga si es par o impar;
de ser par elévelo a la potencia 7 y si es impar calcule su factorial.*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n,i,fact=1;
cout<<"ingrese un numero entero: ";
cin>>n;
if(n%2==0){
    cout<<"su numero es par.\n";
n=pow(n,7);
cout<<"el numero que ingreso elevado a la potencia 7 es igual a: "<<n;
}
else{
    cout<<"su numero no es par.\n";
    n=n;
    for (i = 1; i <= n; i++){
         fact = fact*i;
}
cout<<"el factorial de su numero es: "<<fact;
}
return 0;
}