import java.util.Scanner;
public class App 
{
    public static void main(String[] args) 
    {

        Scanner scanner = new Scanner(System.in);
        String nombre;
        int i;                                     //Todos los int que identifican variables
        int bucle = 0;

        System.out.print("Ingrese su nombre: ");      //Aqui una intrucion para ingresar su nombre
        nombre = scanner.next();

        for (i = 0; i < 1; i++)
        {
            System.out.println("Saludo repetido 10 veces:");     //Solo dice una ves que es saludo se repite 10 veces pero puedes hacer que lo 
                                                                  // imprima muchas veces si quieres 
        }

        while (bucle < 10)                // El while es para que el "Hola" se repita 10 veces
        {
            System.out.println("Hola " + nombre);         
            bucle++;
        }

        scanner.close();
    }
}

