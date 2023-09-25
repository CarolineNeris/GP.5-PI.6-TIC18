#include <iostream>
using namespace std;

int main (){
    char ch1, ch2, ch3;
    cout << "Forneça dois valores do tipo char separados por espaço:" << endl;
    cin >> ch1 >> ch2;
    ch3 = ch1 - 1;

    cout << "Em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;

    if (isprint(ch3)) {
    cout << "Caractere: " << ch3 << endl;
} else {
    cout << "Caractere não imprimível: _" << endl;
}

    ch3 = ch2 - 1;

    printf("Caractere em formato decimal: %d\n", ch3);
    printf("Caractere em formato octal: %o\n", ch3);
    printf("Caractere em formato hexadecimal: %x\n", ch3);

    // Imprime o caractere
    if (isprint(ch3)) {
        printf("Caractere: %c\n", ch3);
    } else {
        printf("Caractere não imprimível: _\n");
    }

    ch3 = (isupper(ch1)) ? 'A ' : '- ';

    // Imprime o valor de ch3
    cout << "Valor de ch3: " << ch3 << endl;

     return 0;
}