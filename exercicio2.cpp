#include <iostream>

using namespace std;

int main() {
    // Letra a - Declare três variáveis int
    int a, b, c;

    // Letra b - Peça ao usuário para digitar dois números inteiros
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    // Letra c - Atribua o valor da primeira expressão a c
    c = 4 * a + b / 3 - 5;

    // Letra d - Imprima o resultado da primeira expressão
    cout << "Resultado da primeira expressao: " << c << endl;

    // Letra e - Atribua o valor da segunda expressão a c
    c = 4 * (a + b) / (3 - 5);

    // Letra f - Explique a diferença entre as expressões
    // A primeira expressão é avaliada na seguinte ordem:
    // 1. Multiplicação: 4 * a
    // 2. Divisão: b / 3
    // 3. Soma: (4 * a) + (b / 3)
    // 4. Subtração: ((4 * a) + (b / 3)) - 5
    // A segunda expressão é avaliada na seguinte ordem:
    // 1. Soma: a + b
    // 2. Multiplicação: 4 * (a + b)
    // 3. Divisão: (4 * (a + b)) / (3 - 5)
    // Portanto, a diferença está na ordem de avaliação das operações.

    // Variante da segunda expressão que gera resultado diferente
    int c_variante = 4 * a + (b / (3 - 5));

    // Imprima o resultado da segunda expressão
    cout << "Resultado da segunda expressao: " << c << endl;

    // Letra g - Recalcule o valor de c usando a expressão a^2 + 2 * b + c
    c = a * a + 2 * b + c;

    // Imprima o resultado do recálculo
    cout << "Resultado do recalculo: " << c << endl;

    return 0;
}