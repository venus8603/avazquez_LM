#include <iostream> 

using namespace std; 

int main() { 

    int n; // Declara una variable n para el tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: "; // Solicita al usuario que ingrese el tamaño del arreglo
    cin >> n; 

    // Verificacion para que sea un numero entre 1 y 100
    while (n < 1 || n > 100) { 
        cout << "El tamaño del arreglo debe estar entre 1 y 100." << endl; 
        cout << "Ingrese el tamaño del arreglo: "; 
        cin >> n; 
    }

    int arreglo[n]; 
    cout << "Ingrese los numeros a sumar: "<<endl; // Solicita al usuario que ingrese los numeros a sumar

    // Leer los elementos del arreglo
    for (int i = 0; i < n; ++i){ 
        cout << "Numero " << i + 1 << ": "; 
        cin >> arreglo[i]; 
    }

    // Suma de los elementos
    int suma = 0; 
    for (int i = 0; i < n; ++i) { 
        suma += arreglo[i]; 
    }

    // Salida
    cout << "La suma de los elementos del arreglo es: " << suma << endl; // Muestra la suma de los elementos del arreglo

    return 0; 
}
