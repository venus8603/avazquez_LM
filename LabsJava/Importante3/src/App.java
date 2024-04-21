import java.util.Scanner;

public class App 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int suma = 0;
        int contador = 1;
        int temperatura;              //Definicion de variables
        int promedio;

        while (contador <= 12) {
            System.out.println("Ingrese la temperatura del mes " + contador + ": "); // Entre las temperaturas de los meses
            temperatura = scanner.nextInt();
            suma += temperatura;
            contador++;
        }

        promedio = suma / 12;
        System.out.println("El promedio de las temperaturas es: " + promedio); //Imprime el promedio de la temperatura de los 12 meses
        scanner.close();
    }
}

