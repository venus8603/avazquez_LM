using System;

class Program {
    static void Main(string[] args) {
        Console.Write("Ingrese un número entero: ");

        try {
            int numero = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Número ingresado: " + numero);
        } catch (FormatException) {
            Console.WriteLine("Error: Debe ingresar un número entero.");
        }
    }
}
