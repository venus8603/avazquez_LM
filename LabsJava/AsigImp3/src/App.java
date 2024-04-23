import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double horasTrabajadas;
        int i = 0;
        double sueldoBruto;
        double pagoHora;
        double overtimeSueldo;
        double overtimeHoras;
        double descuento;
        double sueldoFinal;
        double totalPagoNomina = 0;
        double totalPagoOvertime = 0;
        double totalHorasOvertime = 0;

        System.out.print("Ingrese el pago por hora: $"); // Pago por hora
        pagoHora = scanner.nextDouble();

        while (i < 3) {
            i++;

            overtimeSueldo = 0;
            overtimeHoras = 0;

            System.out.println("-Empleado " + i + "-");
            System.out.print("Horas trabajadas del empleado "+ i + ": ");

            horasTrabajadas = scanner.nextDouble();

            if (horasTrabajadas > 40) {  // Calculo sueldo overtime
                overtimeHoras = horasTrabajadas - 40;
                overtimeSueldo = overtimeHoras * (pagoHora * 2);
                sueldoBruto = (40 * pagoHora) + overtimeSueldo;
            } else {
                sueldoBruto = horasTrabajadas * pagoHora;
            }

            // Calculo descuento nomina
            descuento = sueldoBruto * 0.07;
            sueldoFinal = sueldoBruto - descuento;

            System.out.println("Sueldo: $ " + sueldoFinal);
            System.out.println("Overtime hecho: " + overtimeHoras);
            System.out.println("Overtime Pagado: $" + overtimeSueldo + "\n");

            totalPagoNomina += sueldoFinal; // suma pago 
            totalPagoOvertime += overtimeSueldo; // suma pago overtime
            totalHorasOvertime += overtimeHoras; // suma horas overtime
        }

        System.out.println("---------------------");
        System.out.println("Total pagado en nomina: $" + totalPagoNomina);
        System.out.println("Total overtime hecho: " + totalHorasOvertime);
        System.out.println("Total overtime Pagado: $" + totalPagoOvertime);

    }
}

