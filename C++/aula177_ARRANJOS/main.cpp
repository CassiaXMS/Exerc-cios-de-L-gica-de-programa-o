#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,N;

    cout << "Quantos numeros serao digitados: ";
    cin >> N;

    double vet[N];

    for(i=0; i<N; i++){
        cout << "NUMERO: ";
        cin >> vet [i];
    }


    cout << "Numeros digitados: ";
    cout << fixed << setprecision(2);
    for(i=0; i<N; i++){
        cout << vet[i] << endl ;
    }
    return 0;
}
