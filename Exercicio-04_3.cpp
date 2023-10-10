#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    string resultado = 
        x == 0 && y == 0 ? "Origem" :
        x == 0 ? "Eixo Y" :
        y == 0 ? "Eixo X" :
        x > 0 && y > 0 ? "Primeiro Quadrante" :
        x < 0 && y > 0 ? "Segundo Quadrante" :
        x < 0 && y < 0 ? "Terceiro Quadrante" :
        "Quarto Quadrante";  

    cout << "O ponto (" << x << ", " << y << ") está no " << resultado << "." << endl;

    return 0;
}
