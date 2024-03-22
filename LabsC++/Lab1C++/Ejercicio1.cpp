#include <iostream>
using namespace std;

int main()
{
    float examen1, examen2, examen3, examen4, promedioFinal;

    // Solicitar al usuario que ingrese las calificaciones de los cuatro examenes
    cout << "Ingrese las calificaciones de los cuatro exámenes:" << endl;
    cout << "Examen 1: ";
    cin >> examen1;
    cout << "Examen 2: ";
    cin >> examen2;
    cout << "Examen 3: ";
    cin >> examen3;
    cout << "Examen 4: ";
    cin >> examen4;

    // Calcular el promedio final
   promedioFinal = (examen1 + examen2 + examen3 + examen4) / 4;

    // Mostrar el promedio final
    cout << "El promedio final del estudiante es: " << promedioFinal << endl;

    return 0;
}