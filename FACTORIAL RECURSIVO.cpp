/*Autor: Vanessa Yhoselin Castro Ccallo 
  Fecha: 11/04/2024
  Idea:  Se utiliza un bucle for para iterar desde "numero" hasta 1*/
#include <iostream>

using namespace std;

// Función recursiva para calcular el factorial de un número
int factorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialRecursivo(n - 1);
    }
}

int main() {
	
	cout << "-------------------FACTORIAL RECURSIVO ------------------"<<endl;
    int numero;
    cout << "Ingrese un nUmero para calcular su factorial: ";
    cin >> numero;

    cout << "El factorial de " << numero << " es: ";

    for (int i = numero; i >= 1; i--) {
        cout << i;
        if (i > 1) {
            cout << " x ";
        }
    }
    // Llamada a la función factorialRecursivo()
    cout << " = " << factorialRecursivo(numero) << endl;

    return 0;
}