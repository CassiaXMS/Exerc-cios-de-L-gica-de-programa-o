import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int M, N;
		
		System.out.print("Quantas linhas vai ter a matriz:  ");
		N = sc.nextInt();
		System.out.print("Quantas colunas vai ter a matriz:  ");
		M = sc.nextInt();
		
		int[][] matriz= new int[N][M];
		
		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				matriz[i][j] = sc.nextInt();
			}
		}
		
		System.out.println();
		
		System.out.println(" MATRIZ DIGITADA: ");
		for(int i=0; i<N; i++) {
			for(int j=0; j<M; j++) {
				System.out.print(matriz[i][j] + " ");
			}
			System.out.println();
		}
	}

}
