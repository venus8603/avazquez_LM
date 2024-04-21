#include <iostream>
#include <string>           //C++ 

using namespace std;

int main()
{
    string nombre;       //Todos los int que identifican variables
    int i = 0;
    int bucle = 0; 

    cout << "Ingrese su nombre: ";    //Aqui una intrucion para ingresar su nombre
    cin >> nombre;

    for (i = 0; i < 1; i++) 
    cout << "Saludo repetido 10 veces:" << endl;      //Solo dice una ves que es saludo se repite 10 veces pero puedes hacer que lo 
                                                     // imprima muchas veces si quieres 
    { 
        while (bucle < 10) 
        {
            cout << "Hola " << nombre << endl;     // El while es para que el "Hola" se repita 10 veces
            bucle++;
        }
        
    }

    return 0;
}



