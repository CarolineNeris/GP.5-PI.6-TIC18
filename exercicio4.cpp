#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    cout << "Digite o primeiro numero de ponto flutuante: ";
    cin >> x;
    cout << "Digite o segundo numero de ponto flutuante: ";
    cin >> y;

    z = x + y;
    cout << "A soma de " << x << " e " << y << " eh igual a " << z << endl;

    z = (x + y) / 2;
    cout << "A media de " << x << " e " << y << " eh igual a " << z << endl;
    
    z = x * y;
    cout << "O produto de " << x << " e " << y << " eh igual a " << z << endl;

    z = (x > y) ? x : y;
    cout << "O maior valor entre " << x << " e " << y << " eh igual a " << z << endl;

    z = (x < y) ? x : y;
    cout << "O menor valor entre " << x << " e " << y << " eh igual a " << z << endl;

    return 0;
}
