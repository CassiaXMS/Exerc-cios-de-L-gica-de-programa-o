package aula203_soma_vetor;
import java.util.Scanner;
import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int qtd;
		double soma, media;
		
		System.out.print(" Quantos numeros voce vai digitar? ");
		qtd = sc.nextInt();
		
		double[] vetor = new double[qtd];
		
		for(int i=0; i<qtd; i++) {
			System.out.print(" Digite um numero: ");
			vetor[i] = sc.nextDouble();
		}
		
		System.out.println();
		System.out.print(" VALORES = ");
		for(int i=0; i<qtd; i++) {
			System.out.print( String.format("%.1f " , vetor[i]));
		}
		
		System.out.println();
		soma = 0;
		System.out.print(" SOMA = ");
		for(int i=0; i<qtd; i++) {
			soma = soma + vetor[i];
		}
		System.out.print(String.format("%.2f " , soma));
		
		System.out.println();
		media = 0;
		System.out.print(" MEDIA = ");
		for(int i=0; i<qtd; i++) {
			media = soma/qtd;
		}
		System.out.print(String.format("%.2f" , media));

	}

}
