/*Autor: Vanessa Yhoselin Castro Ccallo 
  Fecha: 11/04/2024
  Idea:  En la  funcion fibonacci  si n es 0 o 1, la funcion devuelve n. 
  		 De lo contrario llama asi misma dos veces con (n-1) y (n-2) y luego nos da la suma de ambos
		 En la funcion principal nos pide n, luego se llama a la funcion fibonacci()*/

#include <iostream>

using namespace std;

// Función recursiva para poder calcular el n-ésimo término de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	
	cout << "-------------------FIBONACCI RECURSIVO ------------------"<<endl;
    int n;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i);
        
        if (i<n-1)//verifica si estamos en la ultima iteracion, si es asi ya no se imprimira el signo , 
        {
            cout<<", ";
        }
    }

    return 0;
}