#include <iostream>
using namespace std;

int main() {
    int antiguedad;
    
    cout << "Ingrese en years la antiguedad del empleado: "; //Donde el usuario entra su antiguedad que lleva en elempleo
    cin >> antiguedad;

    if (antiguedad >= 5) { //si lleva 5 years o mas se lleva el bono
        cout << "Es elegible para el bono, recibira $1000." << endl; //Si el empleado es elegible para el bono se imprime este mensaje
    } else {
        cout << "El empleado no es elegible para el bono." << endl; //Si el empleado no es elegible se imprime este mensaje
    }

    return 0;
}
