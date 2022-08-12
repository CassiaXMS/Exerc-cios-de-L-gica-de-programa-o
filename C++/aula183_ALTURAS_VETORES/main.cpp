#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int qtd, i, idade[qtd], soma=0, percent=0,calculo;
    float altura[qtd], media;
    string nome[qtd];

    cout << " Quantas pessoas serao digitadas: ";
    cin >> qtd;

    for(i=0; i<qtd; i++){
            cout << " Dados da " << i+1 << " pessoa: " << endl;
            cout << " Nome: ";
            cin.ignore(INT_MAX, '\n');
            getline(cin, nome[i]);
            cout << " Idade: ";
            cin >> idade[i];
            cout << " Altura: ";
            cin >> altura[i];
    }

    for(i=0; i<qtd;i++){
         if(idade[i] < 16){
            percent = percent + 1;
         }
         soma = soma + altura[i];
    }

    media = soma/qtd;
    calculo = (percent/qtd) *100.0;


    cout << fixed << setprecision(2);
    cout << " Altura media: " << media;
    cout << " Porcentagem de pessoas com menos de 16 anos: " << calculo << "%";
    return 0;
}
