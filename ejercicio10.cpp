/*Escriba un programa que permita leer una serie de números enteros entre -1.000 y 1.000. 
Con  los  números  ingresados,  calcular  la  suma  de  los  números  pares,  el producto de los impares, 
la potencia par de los impares, la suma de los negativos.El se ejecutará de dos formas: 1-la cantidad de veces 
que el usuario quiera, 2-que el usuario  seleccione  un  número  de  escape;  en  el  momento  que estenúmero  
sea ingresado finalizará la ejecución y mostrará los resultados de las operaciones.*/
#include <iostream>
using namespace std;
int main(){
long  A, B=0, E=1, C, D, L, F=1, M, S=0, Z, N=0, X=1, K, G=0;
cout<<"ingrese la cantidad de veces que quiere repetir el codigo: "; cin>>L;
do{
cout<<"\ningrese un numero: "; cin>>A;
if(A>-1000&&A<1000){
if(A>=0){
M = A%2;
if(M==0){B = B+A;}
else{
E=E*A;
do{
cout<<"ingrese la potencia par a la que desea elevar el numero: "; cin>>C;
if(C>=0){
M = C%2;
F = 1;
S = 1;
if(M==0&&C>0){
do{
D = 1; 
Z = 1;
D = D*A; 
F = F*D;
S = S+1; 
}while(S<=C);
cout<<"el valor de el numero "<<A<<" elevado a la potencia "<<C<<" es igual a: "<<F;
G++;
}
if(C==0){
G++;
Z=1;
F=1;
cout<<"el valor de el numero "<<A<<" elevado a la potencia "<<C<<" es igual a: "<<F;
} 
if(M<0||M>0){
cout<<"lo sentimos el numero no es valido\n";
Z=0;
}
}
}while(Z==0);
}
}
else{
N=N+A;
}
X++;
}
else{
cout<<"lo siento el numero que ha digitado no es valido";
X--;
}
cout<<"\nsi desea terminar el programa oprima 1: "; cin>>K;
if(K==1){
X=L+1;
}
}while(X<=L);
cout<<"\nel resultado de la suma de los numeros pares positivos es igual a: "<<B;
cout<<"\nel producto de los numeros impares positivos es igual a: "<<E;
cout<<"\nel numero de resultados que se imprimieron de la potenciacion de los numeros impares positivos fueron: "<<G;
cout<<"\nel resultado de la sumana de los numeros negativos es igual a: "<<N;
return 0;
}