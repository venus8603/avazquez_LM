#include <iostream>
#include <string>

using namespace std;

int main() {
    int cantidadEstudiantes;
    int sumaCalificaciones = 0;
    int promedio; 
    string nombreEstudiante;
    int calificacionEstudiante;

    // Para que el usuario entre el numero de estudiantes, maximo son 10
    cout << "Ingrese la cantidad total de estudiantes en el grupo (10 estudiantes maximo): ";
    cin >> cantidadEstudiantes;

    // Si esto no se cumple va a pedirte que entres un numero del 1 al 10 nuevamente
    if (cantidadEstudiantes > 10 || cantidadEstudiantes < 1) {
        cout << "La cantidad de estudiantes tiene que estar entre 1 y 10." << endl;
        return 1; 
    }

    //Aqui primero te va a imprimir el # de estudiante que estas entrando segun el orden
    //Despues tienes que poner el nombre del estudiante que deseas poner la calificacion
    for (int i = 1; i <= cantidadEstudiantes; ++i) {
        cout << "Estudiante #" << i << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante;

    //Aqui te va a pedir que entres la calificacion del estudiante que pusiste previamente
        cout << "Ingrese la puntuacion del estudiante:  " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;

        sumaCalificaciones += calificacionEstudiante;
    }

    //Proceso para verificar todas las notas u calcular el promedio del grupo de estudiantes entrado
    promedio = (sumaCalificaciones) / cantidadEstudiantes; 

    //Aqui va a imprimir la calificacion del grupo de estudiantes
    cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl;

    return 0;
}