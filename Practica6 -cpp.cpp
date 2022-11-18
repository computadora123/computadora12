
/** 
 * Profesor: Jose Fuentes 
 * Alumno: Carlos Villalba
 * Curso: 4° 4°
 * Trabajo: tp6
* Fecha: 30/09/22
 */



#include<iostream>

using namespace std;

int main ( ) { 
string n ; 
int i , verificador , acumulador, temp;
cout<<"ingrese un numero(max 16 digitos): ";
cin>> n; 
acumulador=0;
for (i=0;i<n.length()-1;i++)
{
	if ((i%2)==0)
	{
		temp=(n[i]-48)*2;
		if (temp>=10){
			
			temp= temp/10+ temp%10;
		}
		acumulador += temp;
	}
	else
	{
	acumulador += n[i]-48;
		
	}

}
	verificador = (acumulador*9)%10;
	
	if (verificador == (n[15]-48)){
	cout<<"VALIDO"<<endl;
	}
	else
	{
		cout<<"NO VALIDO"<<endl;
		}	
return 0;
}
