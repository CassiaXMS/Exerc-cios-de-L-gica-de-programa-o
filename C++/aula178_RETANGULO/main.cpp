#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double base, altura, diagonal, calculoArea, calculoDiagonal, calculoPerimetro;


    cout << "\n Base do retangulo: ";
    cin >> base;
    cout << "\n Altura do retangulo: ";
    cin >> altura;

    calculoArea = base*altura;
    calculoDiagonal = sqrt(pow(base,2.0) + pow(altura, 2.0));
    calculoPerimetro = 2*(base+altura);

    cout << fixed << setprecision(4);
    cout << " AREA: " << calculoArea << endl;
    cout << " PERIMETRO :" << calculoPerimetro << endl;
    cout << " DIAGONAL: " << calculoDiagonal;
    return 0;
}
