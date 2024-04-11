/*Autor: Vanessa Yhoselin Castro Ccallo 
  Fecha: 11/04/2024
  Idea:  En el bucle for que se ejecuta desde i = 1 hasta que i sea menor o igual que n. 
  		 En cada iteración, se suma el valor de i a la variable suma utilizando la expresión suma = suma + i. 
		 La variable i se utiliza de manera dual: como contador de iteraciones y también para almacenar los valores que se están sumando*/

#include <iostream>

using namespace std;

int main()
{
	cout << "-------------------SUMATORIA DE i------------------"<<endl;
    int i, n, suma = 0;
    cout << "Ingrese en que numero va iniciar (i): " << endl;
    cin>>i;
    cout << "Ingrese hasta donde quiere sumar (n): " << endl;
    cin>>n;

    cout << "Sumando los siguientes elementos:  ";

    for(int i = 1; i <= n; i++ )
    {
        suma = suma + i;
        cout << i;

        if (i<n)//verifica si estamos en la ultima iteracion, si es asi ya no se imprimira el signo +
        {
            cout<<" + ";
        }
    }

    cout <<"\n La suma total es: "<<suma;
    return 0;
}

