/*Un grupo  de  jóvenes  emprendedores sale  de  compras para  prepararse  a  la realización de la presentación 
de su propuesta de negocio y al llegar a su casa cada uno quiere calcular el valor total invertido en su 
atuendo, si se sabe que cada uno compró cuatro camisas, tres pantalones, dospares  de  zapatos,  una  chaqueta
y  4 libros (Programación,  Innovación,  Emprendimiento  y  Lógica  de  Programación).Tenga presente que cada 
artículo tiene un valor diferente.*/
#include<iostream>
using namespace std;
int main(){
    int i,c,p,z,ch,libro,personas,valor;
    cout<<"cuantos van a calcular el valor de su atuendo: ";
    cin>>personas;
    for(i=0;i<personas;i++){
        cout<<"\nescriba el valor de una camisa: "; cin>>c;
        cout<<"escriba el valor de un pantalon: ";cin>>p;
        cout<<"escriba el valor de un par de zapatos: ";cin>>z;
        cout<<"escriba el valor de una chaqueta: ";cin>>ch;
        cout<<"escriba el valor de uno de los libros: ";cin>>libro;
        c=c*4;
        p=p*3;
        z=z*2;
        ch=ch*2;
        libro=libro*4;
        valor=c+p+z+ch+libro;
        cout<<"el valor de su atuendo es: "<<valor;

    }
    return 0;
}