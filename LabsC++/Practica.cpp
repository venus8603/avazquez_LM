#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"Bienvenido a Johanna's Cafe: "<<endl;
    cout <<"MENU " <<endl;
    cout <<"1. cafe " <<endl;
    cout <<"2. te " <<endl;
    cout <<"3. chocolate caliente " <<endl;
    cout <<"4. jugo de naranja " <<endl;
    cout <<"--------------------------------- " <<endl;
    cout <<"Por favor seleciona tu bebida " <<endl;
    cin >> opcion;

    switch(opcion)
    {
        case 1: //cafe
            cout << "El precio del cafe es $2" <<endl;
            break;
        case 2: //Te
            cout << "El precio del Te es $1.5" <<endl;
            break;
        case 3: //Chocolate caliente
            cout << "El precio del Chocolate caliente es $2.5" <<endl;
            break;
        case 4: //Jugo de naranja
            cout << "El precio del Jugo de naranja es $3" <<endl;
            break;

        default: // En caso de que elusuario ingrese una opcion no valida
            cout <<"Opcion NO valida. Por favor, seleciona una bebida del menu " <<endl;
        
            
    }
    return 0;
}