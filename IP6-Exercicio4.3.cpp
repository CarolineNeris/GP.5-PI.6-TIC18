#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    string quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" : "quarto quadrante")
                               : ((x < 0) ? ((y > 0) ? "segundo quadrante" : "terceiro quadrante")
                                          : ((y == 0) ? "sobre o eixo x" : "sobre o eixo y"));

    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;

    return 0;
}
