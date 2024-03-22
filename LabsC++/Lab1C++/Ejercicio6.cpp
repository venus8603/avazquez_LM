#include <iostream>
using namespace std;

int main() 
{
    float base, altura, area, perimetro;

    // Solicitar al usuario que ingrese la base y la altura del rectangulo
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    // Calcular el area del rectángulo
    area = base * altura;

    // Calcular el perimetro del rectángulo
    perimetro = 2 * base + 2 * altura;

    // Mostrar el area y el perímetro del rectángulo
    cout << "El área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetro << endl;

    return 0;
}