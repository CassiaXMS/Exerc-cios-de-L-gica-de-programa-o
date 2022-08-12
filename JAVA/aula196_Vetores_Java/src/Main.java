import java.util.Scanner;
import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, i;
		double num;
		
		System.out.print(" Quantos numeros voce vai digitar: ");
		n = sc.nextInt();
		
		double[] vetor = new double[n];
		
		for(i=0; i<n; i++) {
			System.out.print(" Digite um numero: ");
			vetor[i] = sc.nextDouble();
		}
		
		System.out.println();
		
		System.out.println(" NUMEROS DIGITADOS: ");
		for(i=0; i<n; i++) {
			System.out.println(String.format("%.1f", vetor[i]));
		}
	}

}
