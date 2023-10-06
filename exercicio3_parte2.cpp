#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    (num1 > num2) ? cout << num1 << " e maior" : (num1 < num2) ? cout << num2 << " e maior" : cout << "estes números são iguais";

    if (num1 == num2) {
        cout << endl; 
    } else if ((num1 > num2 && num1 % 2 == 0) || (num2 > num1 && num2 % 2 != 0)) {
        cout << " e eh um numero par" << endl;
    } else {
        cout << " e eh um numero impar" << endl;
    }

    return 0;
}
