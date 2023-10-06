#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double raio;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    double diametro = 2 * raio;

    double circunferencia = 2 * M_PI * raio;

    double area = M_PI * pow(raio, 2);

    cout << "Diametro do circulo: " << diametro << endl;
    cout << "Circunferencia (perimetro) do circulo: " << circunferencia << endl;
    cout << "Area do circulo: " << area << endl;

    return 0;
}
