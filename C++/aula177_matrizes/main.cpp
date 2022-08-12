#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int M,N,i,j;

    cout << "\n Quantas linhas: ";
    cin >> M;
    cout << "\n Quantas colunas: ";
    cin >> N;

    int mat[N][M];

    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            cout << "\n Elemento [" << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }
    cout << endl;

    cout << "Matriz digitada: " << endl;
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
