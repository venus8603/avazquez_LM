import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        // Solicitar al usuario que ingrese el estado de la tarjeta
        System.out.print("Ingrese el estado de su tarjeta de biblioteca (1 para activo y 2 para inactiva): ");
        int estadoTarjeta = scanner.nextInt();

        // Verificar si la tarjeta está activa o inactiva
        if (estadoTarjeta == 1) {
            // Tarjeta activa
            System.out.println("Su tarjeta está activa. Usted puede realizar préstamos.");
        }

        if (estadoTarjeta == 2) {
            // Tarjeta inactiva
            System.out.println("Su tarjeta está inactiva. NO se permiten préstamos.");
        }
    }
}
