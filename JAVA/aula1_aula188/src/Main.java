import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		//Meu primeiro programa em Java
		
		System.out.println("Ola seja bem vinda dev Cassia!");
		
		int idade;
		double salario, altura;
		char genero;
		String nome;
		
		idade = 16;
		salario=1568.98;
		altura=1.65;
		genero='M';
		nome="Vitor Cegueira";
		
		System.out.println(" IDADE = " + idade);
		System.out.println(" SALARIO = " + String.format("%.2f",salario));
		System.out.println(" ALTURA = " + String.format("%.2f",altura));
		System.out.println(" GENERO = " + genero);
		System.out.println(" NOME = " + nome);
		
		System.out.println("");
		
		System.out.println(" O funcionario " + nome + ", sexo " + genero + ", ganha " + String.format("%.2f", salario)
		+ " e tem " + idade +" anos.");
		
		
		
	}

}
