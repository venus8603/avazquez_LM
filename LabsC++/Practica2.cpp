#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout <<"Instrumentos en descuento: "<<endl;
    cout <<"1. Guitarra " <<endl;
    cout <<"2. Piano " <<endl;
    cout <<"3. Bateria " <<endl;
    cout <<"4. Violin " <<endl;
    cout <<"5. Flauta " <<endl;
    cout <<"Por favor selecione el numero del instrumento que desea ver su descuento. " <<endl;
    cin >> opcion;

    switch(opcion)
    {
        case 1: //Guitarra
            cout << "El descuento de la Guitarra es 10%" <<endl;
            break;
        case 2: //Piano
            cout << "El descuento del Piano es 15%" <<endl;
            break;
        case 3: //Bateria
            cout << "El descuento de la Bateria es 20%" <<endl;
            break;
        case 4: //Violin
            cout << "El descuento del Violin es 12%" <<endl;
            break;
        case 5: //Flauta
            cout << "El descuento de la Flauta 8%" <<endl;
            break;

        default: // Instrumento no reconocido, intentar denuevo
            cout <<"Esta opcion no es valida, instrumento no reconocido. Intente nuevamente. " <<endl;
        
            
    }
    return 0;
}