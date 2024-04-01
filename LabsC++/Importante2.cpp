#include <iostream>
#include <sstream>
#include <string>

int main() 
{
    std::string input;
    std::cout << "Entre un numero entero: "; //Donde se entra el numero
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int numero;
    
    if (iss >> numero && iss.eof()) {
        std::cout << "Numero entrado: " << numero << std::endl; //Num entero
    } else {
        std::cout << "Error: Debe entrar un numero entero." << std::endl; //Saldra solamente si entraste un numero que no es entero
    }

    return 0;
}
