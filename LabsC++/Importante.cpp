#include <iostream>
#include <limits>

int main() 
{
    int numero;
    std::cout << "Entra un numero entero: ";

    if (!(std::cin >> numero)) {

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Error: Debe entrar un numero entero." << std::endl;

    } else {

        std::cout << "Numero entrado: " << numero << std::endl;
    }

    return 0;
}
