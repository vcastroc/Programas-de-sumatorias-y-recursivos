/*Autor: Vanessa Yhoselin Castro Ccallo 
  Fecha: 11/04/2024
  Idea:  Lleva la misma idea que en el ejecicio 2, solo que en este caso aumente una variable "elevado", 
  		 utilizando la libreria math.h, este va elevar al cuadrado a cada numero, luego se realizara la suma total */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "-------------------SUMATORIA DE i al cuadrado ------------------"<<endl;
    int i, n, suma = 0, elevado;
    cout << "Ingrese en que numero va iniciar (i): " << endl;
    cin>>i;
    cout << "Ingrese hasta donde quiere sumar (n):  " << endl;
    cin>>n;

    cout << "Sumando los siguientes elemesntos:  ";

    for(int i = 1; i <= n; i++ )
    {
        elevado =  pow(i, 2);
        suma = suma + elevado;
        cout << elevado;

        if (i<n)//verifica si estamos en la ultima iteracion, si es asi ya no se imprimira el signo +
        {
            cout<<" + ";
        }
    }

    cout <<"\n La suma total es: "<<suma;
    return 0;
}

