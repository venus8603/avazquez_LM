#include <iostream>
using namespace std;

int main()
{
    int year_nacimiento, year_actual, edad_aproximada;

    // Solicitar al usuario que ingrese el año de nacimiento y el año actual
    cout << "Ingrese el año de nacimiento: ";
    cin >> year_nacimiento;
    cout << "Ingrese el año actual: ";
    cin >> year_actual;

    // Calcular la edad aproximada
    edad_aproximada = year_actual - year_nacimiento;

    // Mostrar la edad aproximada
    cout << "La edad aproximada es: " << edad_aproximada << " years" << endl;

    return 0;
}
