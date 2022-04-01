/*Un  estudiante  universitario  está  cursando  actualmente  6  asignaturas;  
solicite  las notas correspondientes a cada asignatura cursada, calcule el promedio obtenido y si 
es mayor que 3.5 diga que ha aprobado el semestre, de lo contrario diga que ha reprobado.*/
#include<iostream>
using namespace std;
int main(){
    int i;
    float n, na;
    for(i=0;i<6;i++){
       cout<<"materia "<<i+1;
        cout<<"\ningrese la nota de esta materia: ";
        cin>>n;
        na=na+n;
    }
    if ((na/6)>3.5){
        na=na/6;
        cout<<"el estudiante aprobo con: "<<na;
    }
    else{
        na=na/6;
      
        cout<<"el estudiante reprobo con: "<<na;
    }
    return 0;
}