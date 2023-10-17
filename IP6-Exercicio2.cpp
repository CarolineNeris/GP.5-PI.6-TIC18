#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    //b.
    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    // c.
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da primeira expressão: " << c << endl;

    //e. 
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da segunda expressão: " << c << endl;
    //f. 

    // As expressões produzem resultados diferentes devido à precedência de operadores.
    // Na primeira expressão, a multiplicação e a divisão são executadas antes da adição e subtração.
    // Na segunda expressão, as operações dentro dos parênteses são executadas antes de multiplicação e divisão.

    // Variação da segunda expressão para mostrar resultados diferentes
    c = 4 * a + (b / (3 - 5));
    cout << "Resultado da segunda expressão (variação): " << c << endl;

    // g.
    c = a * a + 2 * b + c;
    cout << "Resultado da terceira expressão: " << c << endl;

    return 0;
}
