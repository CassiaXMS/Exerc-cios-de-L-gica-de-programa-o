package aula204_matriz_diagonal_negativ;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N, i, j, negativos = 0;
		
		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();
		
		int[][] matriz = new int[N][N];
		
		for(i=0; i<N; i++) {
			for(j=0; j<N; j++) {
				System.out.print(" Elemento ["+i+","+j+"]: ");
				matriz[i][j] = sc.nextInt();
			}
		}
		
		System.out.println(" DIAGONAL PRINCIPAL: ");
		for(i=0; i<N;i++) {
			System.out.print(matriz[i][i] + " ");
		}
		
		System.out.println();
		
		System.out.println(" QUANTIDADE DE NEGATIVOS: ");
		for(i=0; i<N;i++) {
			for(j=0; j<N; j++) {
				if(matriz[i][j] < 0) {
					negativos = negativos +1;
				}
			}
		}
		System.out.println(negativos);
	}

}
