#include <iostream>
using namespace std;

int main()
{
//Definicion de variables
    double area;
    double radio; // Es lo mismo que area, radio;
    const double PI = 3.14;  // Identificador de constante

    cout <<"Ingrese la medida del radio: ";
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El area del circulo es: "<<area <<endl;

    return 0;
}

