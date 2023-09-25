#include <iostream>
using namespace std;

int main() {
    double raio;

    
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    double diametro = 2 * raio;

    double circunferencia = 2 * 3.14 * raio;

    double area = 3.14 * (raio*raio);

    cout << "Diâmetro do círculo: " << diametro << endl;
    cout << "Circunferência do círculo: " << circunferencia << endl;
    cout << "Área do círculo: " << area << endl;

    return 0;
}
