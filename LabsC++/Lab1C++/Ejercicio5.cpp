#include <iostream>
using namespace std;

int main()
{
    float base, altura, area;

    // Solicitar al usuario que ingrese la base y la altura del rectangulo
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    // Calcular el area del rectángulo
    area = base * altura;

    // Mostrar el area del rectángulo
    cout << "El área del rectángulo es: " << area << endl;

    return 0;
}