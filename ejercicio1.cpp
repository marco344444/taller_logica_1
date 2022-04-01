/*El  propietario  de  una  peque�a  empresa  quiere  conocer  el  valor  a  pagar  por  la n�mina  de  sus  10
empleados,  sabiendo  que  cada  uno  tiene  un  sueldo  base  de $855.000.    
Se  sabe  que  por  cada  10  horas  extras  que  trabaje  el  empleado  al  mes obtendr� un 10%
m�s de bonificaci�n al mes, si el empleado trabaja 20 hora extras al  mes  obtendr�  una  bonificaci�n  
del  15% y  si  trabaja  32  horas  extras  recibir�  un 20% de bonificaci�n;
se debe tener en cuenta que las prestaciones sociales de los empleados equivalen a un 26% de su salario base.*/
#include<iostream>
using namespace std;
int main(){
int i,sueldo,sueldobase,he,bonificacion,sueldoacumulado;
sueldobase=855000;
for(i=0;i<10;i++){
	cout<<"\ncuantas horas extra tiene el empleado: "; cin>>he;
switch(he){
    case 10:
sueldo=sueldobase-(sueldobase*0.26);
bonificacion=(sueldo*0.10);
sueldo=sueldo+bonificacion;
cout<<"el sueldo del empleado es: "<<sueldo;
sueldoacumulado=sueldo+sueldoacumulado;
    break;
    case 20:
sueldo=sueldobase-(sueldobase*0.26);
bonificacion=(sueldo*0.15);
sueldo=sueldo+bonificacion;
cout<<"el sueldo del empleado es: "<<sueldo;
sueldoacumulado=sueldo+sueldoacumulado;

    break;
    case 32:
sueldo=sueldobase-(sueldobase*0.26);
bonificacion=(sueldo*0.20);
sueldo=sueldo+bonificacion;
cout<<"el sueldo del empleado es: "<<sueldo;
sueldoacumulado=sueldo+sueldoacumulado;
    break;
    default:
    cout<<"porfavor escriba un numero que puede ser 10, 20 o 32";
    break;
}}
cout<<"el sueldo de la nomina es: "<<sueldoacumulado;
return 0;
}