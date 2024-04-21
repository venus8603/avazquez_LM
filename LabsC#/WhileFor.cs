using System;
                                          //C#
class Program
{
    static void Main()
    {
        string nombre;
        int i;                        //Todos los int que identifican variables
        int bucle = 0;

        Console.Write("Ingrese su nombre: ");
        nombre = Console.ReadLine();                      //Aqui una intrucion para ingresar su nombre

        for (i = 0; i < 1; i++)
        {
            Console.WriteLine("Saludo repetido 10 veces:");    //Solo dice una ves que es saludo se repite 10 veces pero puedes hacer que lo 
                                                              // imprima muchas veces si quieres 
        }

        while (bucle < 10)
        {
            Console.WriteLine("Hola " + nombre);
            bucle++;                                        // El while es para que el "Hola" se repita 10 veces
        }
    }
}
