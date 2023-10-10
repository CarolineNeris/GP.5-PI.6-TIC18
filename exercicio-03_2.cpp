#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Estes números são iguais" << endl;
    } else {
        cout << (num1 > num2 ? num1 : num2) << " é maior" << endl;
    }

    if (num1 != num2) {
        int maior = (num1 > num2 ? num1 : num2);
        cout << (maior % 2 == 0 ? "O maior número é par" : "O maior número é ímpar") << endl;
    }

    return 0;
}
