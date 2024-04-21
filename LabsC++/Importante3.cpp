#include <iostream>
using namespace std;

int main() 
{
    int suma = 0;  //Identificar variables
    int temperatura;

    for (int i = 0; i < 12; i++) //Ciclo del for para resolver el problema que es saber el promedio de las temperaturas de un year
    {
        cout << "Ingrese la temperatura del mes " << i + 1 << ": "; //Entre la temperatura de cada mes para que se realice el programa
        cin >> temperatura;
        suma += temperatura;
    }

    int promedio = suma / 12;
    cout << "El promedio de las temperaturas es: " << promedio << endl; //el print del resultado del promedio de la 
                                                                             // las temperatudas ingresadas
    return 0;
}
