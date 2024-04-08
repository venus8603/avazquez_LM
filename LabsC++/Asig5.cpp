#include <iostream>
using namespace std;

int main() {
    
    bool esMiembroDelTeatro; 
    int numEntradas;
    double descuento = 0.0;
    double precioUnitario = 100.0; // Precio original de cada entrada del teatro
    double precioTotal;

    cout << "¿Es miembro del teatro? (1 para si, 0 para no): "; //Donde el usuario pone si es miembro del usuario o no 
    cin >> esMiembroDelTeatro;
    cout << "Ingrese la cantidad de entradas que desea comprar: ";
    cin >> numEntradas;

    if (esMiembroDelTeatro) { //Si es miembro del teatro tiene el descuento
        if (numEntradas > 5) {
            descuento = 0.15; // 10% + 5% adicional
        } else {
            descuento = 0.10; // 10%
        }
    } else {
        if (numEntradas > 10) {
            descuento = 0.05; // 5%
        }
    }

    precioTotal = numEntradas * precioUnitario * (1 - descuento); // Proceso de calcular el precio

    cout << "El precio total a pagar es: $" << precioTotal << endl;

    return 0;
}
