#include <iostream>

using namespace std;

int main() {
    int num1, num2;


    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    cout << "O número: " << ((num1 > num2) ? num1 : num2) << " é maior." << endl;

    if (num1 == num2) {
        cout << "Estes números são iguais." << endl;
    }

    int maior = (num1 > num2) ? num1 : num2;
    if (maior % 2 == 0) {
        cout << "O maior número é par." << endl;
    } else {
        cout << "O maior número é ímpar." << endl;
    }

    return 0;
}
