using System;

class Program
{

    static void Main()
    {
        double horasTrabajadas;
        double sueldoBruto;
        int i = 0;
        double pagoHora;
        double overtimeSueldo;
        double overtimeHoras;
        double descuento;
        double sueldoFinal;
        double totalPagoNomina = 0;
        double totalPagoOvetime = 0;
        double totalHorasOvertime = 0;

        Console.Write("Ingrese el pago por hora: $"); 
        pagoHora = Convert.ToDouble(Console.ReadLine());

        do
        {
            i++;
            overtimeSueldo = 0;
            overtimeHoras = 0;

            Console.WriteLine("-Empleado" + 1 + "-");
            Console.Wrire("Horas trabajadas de el empleado" + 1 + "-");
            horasTrabajadas = Convert.ToDouble(Console.ReadLine());

            if (horasTrabajadas > 40) // Calculo sueldo overtime
            {
                overtimeHoras = horasTrabajadas - 40;
                overtimeSueldo = overtimeHoras * (pagoHora * 2);
                sueldoBruto = (40 * pagoHora) + overtimeSueldo;

            }
            else // Calculo sueldo no overtime
            {
                sueldoBruto = horasTrabajadas * pagoHora
            }

            descuento = sueldoBruto * 0.07;
            sueldoFinal = sueldoBruto - descuento;  // Calculo de la nomina

            Console.Write("Sueldo: $" + sueldoFinal);
            Console.Write("Overtime hecho: "+ overtimeHoras);
            Console.Write("Overtime Pagado: $"+ overtimeSueldo + "\n");

            totalPagoNomina += sueldoFinal; // Suma pago empleados
            totalPagoOvetime += overtimeSueldo; // Suma pago overtime
            totalHorasOvertime += overtimeHoras; // Suma horas overtime
        }

        while(i < 3);

        Console.WriteLine("------------------");
        Console.WriteLine("Total pagado en nomina: $ " + totalPagoNomina);
        Console.WriteLine("Total overtome hecho: " + totalHorasOvertime);
        Console.WriteLine("Total pvertime pagado: $" + totalPagoOvetime);
    }
}
