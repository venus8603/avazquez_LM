using System;

class Program
{
    static void Main(string[] args)
    {
        int suma = 0;
        int contador = 1;     //Identiicar variables
        int promedio;

        do
        {
            Console.Write("Ingrese la temperatura del mes " + contador + ": ");  //Ingrese las tem de los meses
            int temperatura = Convert.ToInt32(Console.ReadLine());
            suma += temperatura;
            contador++;
        } while (contador <= 12); 

        promedio = suma / 12;
        Console.WriteLine("El promedio de las temperaturas es: " + promedio); //Print el promedio de ls temperaturas
    }
}

