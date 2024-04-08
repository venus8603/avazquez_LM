using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Ingrese, en years la antiguedad del empleado: "); //Donde el usuario entra su antiguedad que lleva en elempleo
        int antiguedad = Convert.ToInt32(Console.ReadLine());

        if (antiguedad >= 5) //si lleva 5 years o mas se lleva el bono
        {
            Console.WriteLine("Es elegible para el bono, recibira $1000: "); //Si el empleado es elegible para el bono se imprime este mensaje
        }
        else
        {
            Console.WriteLine("El empleado no es elegible para el bono: "); //Si el empleado no es elegible se imprime este mensaje
        }
    }
}
