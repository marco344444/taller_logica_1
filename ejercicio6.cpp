/*Si una corbata cuesta una sexta parte de lo que cuesta un traje, un cinturón cuesta una quinta parte 
del mismo traje, los zapatos la mitad del valor del traje y la camisa dos  tercios  delvalor  de  zapatos.  
Elabore  un  programa  que  le  permita  al  usuario armar su atuendo perfecto, con solo pedirle el valor 
de una de las prendas de vestir y las prendas que va a llevar.*/
#include <iostream>
using namespace std;
int main(){
    int A, CB, CT, ZP, CM;
    cout<<"Ingrese el valor del traje: "; cin>>A;

    CB= A/6;
    CT= A/5;
    ZP= A/2;
    CM= (ZP)-(ZP*2/3);
    cout<<"\nel valor de la corbata es: "<<CB;
    cout<<"\nel valor de la cinturon es: "<<CT;
    cout<<"\nel valor de los zapatos es: "<<ZP;
    cout<<"\nel valor de la camisa es: "<<CM;
    return 0;
}
