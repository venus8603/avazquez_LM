#include <iostream>
using namespace std;

int main() 
{
    float lado, area;

    // Solicitar al usuario que ingrese el tamaño del lado del cuadrado
    cout << "Ingrese el tamaño del lado del cuadrado: ";
    cin >> lado;

    // Calcular el area del cuadrado
    area = lado * lado;

    // Mostrar el area del cuadrado
    cout << "El área del cuadrado es: " << area << endl;

    return 0;
}