import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double base, altura;
		
		System.out.print("BASE DO RETANGULO: ");
		base = sc.nextDouble();
		System.out.print("ALTURA DO RETANGULO: ");
		altura = sc.nextDouble();
		
		System.out.println();
		
		System.out.println(" AREA = " + String.format("%.4f", base*altura));
		System.out.println(" PERIMETRO = "+ String.format("%.4f", 2*(base+altura)));
		System.out.println(" DIAGONAL = "+ String.format("%.4f", Math.sqrt(Math.pow (base,2.0) + (Math.pow(altura, 2.0)))));

	}

}
