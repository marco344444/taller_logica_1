/*Si  tenemos  una  serie  de triángulos rectángulos y  nos  dan  el  valor  de  uno  de  sus ángulos  
(no  recto),  ¿Cuál  es  el  valor  del  tercer  ángulopara  cada  uno  de  los triángulos?*/
#include <iostream>
using namespace std;
int main()
{
   float A, C, S;
    cout<<"Ingrese el valor de un angulo al que le quiere sacar complemento o sumplemento: "; cin>>A;

    if(A<90||A==90){
        C=180-A;
        cout<<"el valor de su complemento es: "<<C;
    }
    if(A>90&&A<180){
        S=180-A;
        cout<<"el valor de su suplemento es: "<<S;
     }

    if(A<0||A>180){
        cout<<"opcion no valida";
    }
   
    return 0;
}