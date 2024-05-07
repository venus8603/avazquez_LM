#include <iostream>
using namespace std;

//Funcion b
    double pagoFinal ( double b )
{

//Problema, ejercicio matematico ( Si el precio final de ventas es mayor o igual que $1500 se pagara el bono de $125).
    if ( b >= 1500){
    return b * 0.15 + 125;
    }
    
    else {
        return b * 0.15;
    }

}

//Entrada de datos 
int main ()
{
    double ventas;

    cout << "Ingrese las ventas realizadas: ";
    cin >> ventas;

    double bono = pagoFinal(ventas);

    cout << "Pago final de las ventas realizadas: $" << bono;

    return 0;
}