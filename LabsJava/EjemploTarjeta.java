import java.util.Scanner;
public class App {
    Run|Debug
    public static void main(String[] args) throws Exception
    {
        Scaner scanner = new Scanner(System.in);

        //Solicitar al ususario que entre el estado de la tarjeta
        System.out.print(s:"Ingrese el estado de su tarjeta de biblioteca (1 para activo y 2 para inactiva)");
        int estadoTarjeta = scanner.nextInt();

        //Verificar si la tarjeta esta activa o inactiva
        if (estadoTarjeta == 1)
    {
        //Tarjeta activa
        System.out.printIn(x:"Su tarjeta esta activa. Usted puede realizar prestamos.");
    }    
    
    if (estadoTarjeta ==2)
    {
        //Tarjeta inactiva
        System.out.printIn(x:"Su tarjeta esta inactiva. NO se permiten prestamos. ");
    }
    
    }
}