/*La   oficina   de   Registro   y   Control   Académico   de   la   UPB   está   procesando   
las calificaciones del primer corte de los estudiantes de primer semestre de Ingeniería de   Sistemas   
e   Informática.      Si   se   sabe   que   los   estudiantes   están   cursando actualmente  6  asignaturas; 
solicite  las  notas  correspondientes  a  cada  asignatura cursada  por  cada  estudiante,  
calcule  el  promedio  obtenido  y  si  es  mayor  que  3.5 diga que ha aprobado el corte, de lo contrario diga 
que ha reprobado. Al finalizar se debe conocer la cantidad de estudiantes aprobados y reprobados.*/
#include <iostream>
using namespace std;
int main()
{
float A=6, B, C, D, E, R=0, RP=0, AP=0, T=0,ES;
cout<<"escriba el numero de estudiantes: ";cin>>ES;
do{
D = 1;
C = 0;
do{
cout<<"\ningrese la nota de la asignatura " <<D<<": "; cin>>B;

C=C+B;
D++;
}while(D<=A);

E=C/6;

if(E>3.5){
AP++; 
cout<<"felicitaciones aprobo el corte con: "<<E;
}
else{
RP++;
cout<<"lo sentimos reprobo el corte con: "<<E;
}
T++;
R=R+1;
}while(R<ES);

cout<<"\nel total de estudiantes a las que se le realizo la cuenta es igual a: "<<T;
cout<<"\nlos alumnos que aprobaron el corte fueron: "<<AP;
cout<<"\nlos alumnos que reprobaron el corte fueron: "<<RP;

return 0;
}
