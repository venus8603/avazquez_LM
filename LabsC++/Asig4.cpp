#include <iostream>

using namespace std;

int main() {
    double totalCompras;
    char tieneTarjetaVIP;

    // Donde se ingresa las compras que hizo el cliente
    cout << "Ingrese el total de compras realizadas por el cliente: $";
    cin >> totalCompras;

    cout << "¿El cliente tiene tarjeta de membresía VIP? (S/N): ";
    cin >> tieneTarjetaVIP;

    // si el total de compras es mayor o igual que 150 tiene derecho al descuento
    if (totalCompras >= 150 || tieneTarjetaVIP == 'S' || tieneTarjetaVIP == 's') {
        cout << "El cliente tiene derecho a un descuento especial.\n";
    } else {
        cout << "El cliente no cumple con los requisitos para el descuento especial.\n"; // si no es asi pues se va a imprimir el else
    }

    return 0;
}
