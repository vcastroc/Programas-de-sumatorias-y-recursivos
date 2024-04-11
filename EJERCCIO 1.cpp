/*Autor: Vanessa Yhoselin Castro Ccallo 
  Fecha: 11/04/2024
  Idea:  Primero el programa va pedir que digites con que va inicializar, en este caso va ser el 1. 
         Para que no se sume 1 + 2 + 3 + ..., utilice otra variable j que va contar las iteraciones
		 en el bucle for que se utiliza para sumar el número i repetidamente n veces. */
#include <iostream>

using namespace std;

int main()
{
	cout << "-------------------SUMATORIA DE 1------------------"<<endl;
    int i, n, suma = 0; // inicializamos suma en 0 para que no haya confusiones 
    cout << "Ingrese el i: " << endl;
    cin>>i;
    cout << "Ingrese la cantidad de veces que se quiere sumar:  " << endl;
    cin>>n;

    cout << "Sumando los siguientes elemntos:  ";

    for(int j = 0; j < n; j++ )
    {
        suma = suma + i;
        cout << i;

        if (j<n-1)//verifica si estamos en la ultima iteracion, si es asi ya no se imprimira el signo +
        {
            cout<<" + ";
        }
    }

    cout <<"\n La suma total de "<< i<<" sumado "<<n<<" veces es: "<<suma;
    return 0;
}
