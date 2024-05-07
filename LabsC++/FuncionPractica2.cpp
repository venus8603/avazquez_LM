#include <iostream>
using namespace std;


//Variable global para almacenar el sueldo
float sueldo = 0; //Variable global

//Funcion para calcular el sueldo del vendedor
float calcularSueldo(float ventas) 
{
    sueldo = ventas * 0.15;
    return sueldo;
}


int main() {
    //Entra el totalde las ventas
    float ventas;
    
    cout << "Ingrese el total de las ventas del vendedor: ";
    cin >> ventas;

    float sueldoVendedor = calcularSueldo(ventas);

    //Imprime  el sueldo calculado
    cout << "El sueldo a pagar al vendedor es $3: " << sueldoVendedor <<endl;

    return 0;
}

