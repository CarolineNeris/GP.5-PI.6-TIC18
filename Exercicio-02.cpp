#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    c = 4 * a + b / 3 - 5;

    cout << "Resultado da expressão 4*a + b/3 - 5: " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    cout << "Resultado da expressão 4*(a + b) / (3 - 5): " << c << endl;

    
    // A primeira expressão avalia b/3 antes de realizar as outras operações, devido à precedência do operador.
    // A segunda expressão agrupa (a+b) com parênteses e também divide por (3-5), que resulta em um divisor negativo.

    c = 4 * (a + b) / (3 - 5);
    cout << "Reavaliando o resultado da expressão 4*(a + b) / (3 - 5): " << c << endl;

    return 0;
}
