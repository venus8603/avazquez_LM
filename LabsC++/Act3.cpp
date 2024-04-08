#include <iostream>
using namespace std;

int main() {
    int estadoTarjeta;

    cout << "Utilize 1 sis su tarjeta esta activa, utilize 2 si su tarjeta esta inactiva: "; //Solicitar al ususario que entre el estado de la tarjeta
    cin >> estadoTarjeta;

    if (estadoTarjeta == 1) { //Verificar si la tarjeta esta activa o inactiva
        
        cout << "Su tarjeta esta activa. Usted puede realizar prestamos." << endl; //Tarjeta activa
    } else if (estadoTarjeta == 2) {
        
        cout << "Su tarjeta esta inactiva. NO se permiten prestamos." << endl; // Tarjeta inactiva
    } else {
        
        cout << "Opcion no valida, tiene que ingresar 1 para activa o 2 para inactiva." << endl; // la opcion no es valida
    }

    return 0;
}
