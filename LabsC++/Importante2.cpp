#include <iostream>
#include <sstream>
#include <string>

int main() 
{
    std::string input;
    std::cout << "Entre un numero entero: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int numero;
    
    if (iss >> numero && iss.eof()) {
        std::cout << "Numero entrado: " << numero << std::endl;
    } else {
        std::cout << "Error: Debe entrar un numero entero." << std::endl;
    }

    return 0;
}
