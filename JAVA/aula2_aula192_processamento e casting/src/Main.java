import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int a, b;
		double resultado;
		
		a=5;
		b=2;
		//Para imprimir a casas decimais da divisão de numeros inteiros e preciso difinir uma  como double
		
		resultado = (double)a / b;
		
		System.out.println(resultado);
	}

}
