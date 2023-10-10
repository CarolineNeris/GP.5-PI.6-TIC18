#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    ch3 = ch1 - 1;
    if (!isprint(ch3)) ch3 = '_';
    cout << "Decimal: " << (int)ch3 << " Octal: " << oct << (int)ch3 << " Hexadecimal: " << hex << (int)ch3 << " Caractere: " << ch3 << endl;

    ch3 = ch2 - 1;
    if (!isprint(ch3)) ch3 = '_'; 
    printf("Decimal: %d Octal: %o Hexadecimal: %x Caractere: %c\n", ch3, ch3, ch3, ch3);

    ch3 = isupper(ch1) ? 'A' : ' ';
    cout << "Resultado: " << ch3 << endl;

    ch3 = islower(ch2) ? 'a' : ' ';
    cout << "Resultado: " << ch3 << endl;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "Resultado: " << ch3 << endl;

    return 0;
}
