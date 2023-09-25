#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Digite a coordenada x: ";
    cin >> x;
    cout << "Digite a coordenada y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "O ponto está no primeiro quadrante." << endl;
    } else if (x < 0 && y > 0) {
        cout << "O ponto está no segundo quadrante." << endl;
    } else if (x < 0 && y < 0) {
        cout << "O ponto está no terceiro quadrante." << endl;
    } else if (x > 0 && y < 0) {
        cout << "O ponto está no quarto quadrante." << endl;
    } else if (x == 0 && y == 0) {
        cout << "O ponto está na origem." << endl;
    } else {
        cout << "O ponto está sobre um dos eixos." << endl;
    }

    return 0;
}

