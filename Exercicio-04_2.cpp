#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio;

    const double PI = 3.141592653589793;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // a. Seu diâmetro
    cout << "Diâmetro: " << 2 * raio << endl;

    // b. O valor de sua circunferência (perímetro)
    cout << "Circunferência: " << 2 * PI * raio << endl;

    // c. Sua área
    cout << "Área: " << PI * raio * raio << endl;

    return 0;
}
