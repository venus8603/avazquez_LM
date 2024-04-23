#include <iostream>
using namespace std;

int main() 
{
    const double DESCUENTO = 0.07;

    int horasTrabajadas1, pagoPorHora1, sueldoBruto1 = 0, sueldoNeto1 = 0;
    int horasTrabajadas2, pagoPorHora2, sueldoBruto2 = 0, sueldoNeto2 = 0;
    int horasTrabajadas3, pagoPorHora3, sueldoBruto3 = 0, sueldoNeto3 = 0;
    int totalNomina = 0, totalHorasExtra = 0, totalPagadoHorasExtra = 0;

    // Empleado 1
    cout << "Empleado 1:" << endl;
    cout << "Horas trabajadas: ";
    cin >> horasTrabajadas1;
    cout << "Pago por hora: $";
    cin >> pagoPorHora1;
    cout << endl;

    if (horasTrabajadas1 > 40) 
    {
        int horasRegulares = 40, horasExtra = horasTrabajadas1 - 40;
        sueldoBruto1 = (horasRegulares * pagoPorHora1) + (horasExtra * pagoPorHora1 * 2);
        totalHorasExtra += horasExtra;
        totalPagadoHorasExtra += horasExtra * pagoPorHora1;
    }

     else 
    {
        sueldoBruto1 = horasTrabajadas1 * pagoPorHora1;
    }

    int descuento1 = sueldoBruto1 * DESCUENTO;
    sueldoNeto1 = sueldoBruto1 - descuento1;

    totalNomina += sueldoNeto1;

    // Empleado 2
    cout << "Empleado 2:" << endl;
    cout << "Horas trabajadas: ";
    cin >> horasTrabajadas2;
    cout << "Pago por hora: $";
    cin >> pagoPorHora2;
    cout << endl;

    if (horasTrabajadas2 > 40) 
    {
        int horasRegulares = 40, horasExtra = horasTrabajadas2 - 40;
        sueldoBruto2 = (horasRegulares * pagoPorHora2) + (horasExtra * pagoPorHora2 * 2);
        totalHorasExtra += horasExtra;
        totalPagadoHorasExtra += horasExtra * pagoPorHora2;
    } 
    
    else 
    {
        sueldoBruto2 = horasTrabajadas2 * pagoPorHora2;
    }

    int descuento2 = sueldoBruto2 * DESCUENTO;
    sueldoNeto2 = sueldoBruto2 - descuento2;

    totalNomina += sueldoNeto2;

    // Empleado 3
    cout << "Empleado 3:" << endl;
    cout << "Horas trabajadas: ";
    cin >> horasTrabajadas3;
    cout << "Pago por hora: $";
    cin >> pagoPorHora3;
    cout << endl;

    if (horasTrabajadas3 > 40) 
    {
        int horasRegulares = 40, horasExtra = horasTrabajadas3 - 40;
        sueldoBruto3 = (horasRegulares * pagoPorHora3) + (horasExtra * pagoPorHora3 * 2);
        totalHorasExtra += horasExtra;
        totalPagadoHorasExtra += horasExtra * pagoPorHora3;
    } 
    
    else 
    {
        sueldoBruto3 = horasTrabajadas3 * pagoPorHora3;
    }

    int descuento3 = sueldoBruto3 * DESCUENTO;
    sueldoNeto3 = sueldoBruto3 - descuento3;

    totalNomina += sueldoNeto3;

    // Mostrar resumen de nomina
    cout << "Resumen de nómina:" << endl;
    cout << "-------------------" << endl;

    // Empleado 1
    cout << "Empleado 1:" << endl;
    cout << "Sueldo bruto: $" << sueldoBruto1 << endl;
    cout << "Descuento: $" << descuento1 << endl;
    cout << "Sueldo neto: $" << sueldoNeto1 << endl << endl;

    // Empleado 2
    cout << "Empleado 2:" << endl;
    cout << "Sueldo bruto: $" << sueldoBruto2 << endl;
    cout << "Descuento: $" << descuento2 << endl;
    cout << "Sueldo neto: $" << sueldoNeto2 << endl << endl;

    // Empleado 3
    cout << "Empleado 3:" << endl;
    cout << "Sueldo bruto: $" << sueldoBruto3 << endl;
    cout << "Descuento: $" << descuento3 << endl;
    cout << "Sueldo neto: $" << sueldoNeto3 << endl << endl;

    cout << "Total pagado en nómina: $" << totalNomina << endl;
    cout << "Total de horas overtime trabajadas: " << totalHorasExtra << " horas" << endl;
    cout << "Total pagado en horas overtime: $" << totalPagadoHorasExtra << endl;

    return 0;
}
