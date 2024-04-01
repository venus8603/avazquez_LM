#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Entra un numero entero: "; //Donde se entra el numero
    cin >> numero;

    try {
        if (cin.fail())
        throw ("Error: Debe entrar un numero entero. "); //Saldra solamente si entraste un numero que no es entero

       cout << "El numero entero entrado es: " << numero << endl; //Num entero
}
catch (const char* mensaje)
{
    cout << mensaje << endl;
}

return 0;

}
