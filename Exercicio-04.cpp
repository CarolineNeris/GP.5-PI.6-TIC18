#include <iostream>
using namespace std;

int main() {
    // a. Declare três variáveis de tipo double
    double x, y, z;

    // b. Peça ao usuário para digitar dois números de ponto flutuante
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // c. Atribua à variável z a somas das variáveis x e y
    z = x + y;
    cout << "Soma: " << z << endl;

    // d. Atribua à variável z a média das variáveis x e y
    z = (x + y) / 2;
    cout << "Média: " << z << endl;

    // e. Atribua à variável z o produto entre as variáveis x e y
    z = x * y;
    cout << "Produto: " << z << endl;

    // f. Atribua à variável z o maior valor entre as variáveis x e y
    z = (x > y) ? x : y;
    cout << "Maior valor: " << z << endl;

    // g. Atribua à variável z o menor valor entre as variáveis x e y
    z = (x < y) ? x : y;
    cout << "Menor valor: " << z << endl;

    return 0;
}
