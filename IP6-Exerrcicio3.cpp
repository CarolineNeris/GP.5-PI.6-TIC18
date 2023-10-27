#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;

    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // c.
    ch3 = static_cast<char>(ch1 - 1);

    cout << "Caractere ch3 em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Caractere ch3 em formato octal: " << oct << static_cast<int>(ch3) << dec << endl;
    cout << "Caractere ch3 em formato hexadecimal: " << hex << static_cast<int>(ch3) << dec << endl;
    if (isprint(ch3)) {
        cout << "Caractere ch3: " << ch3 << endl;
    } else {
        cout << "Caractere ch3: _" << endl;
    }

    // d.
    ch3 = static_cast<char>(ch2 - 1);

    printf("Caractere ch3 em formato decimal: %d\n", ch3);
    printf("Caractere ch3 em formato octal: %o\n", ch3);
    printf("Caractere ch3 em formato hexadecimal: %x\n", ch3);
    if (isprint(ch3)) {
        cout << "Caractere ch3: " << ch3 << endl;
    } else {
        cout << "Caractere ch3: _" << endl;
    }

    // e.
    ch3 = (isupper(ch1)) ? 'A' : ' ';

    cout << "Valor de ch3: " << ch3 << endl;

    // f.
    ch3 = (islower(ch2)) ? 'a' : ' ';

    cout << "Valor de ch3: " << ch3 << endl;

    // g.
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    cout << "Valor de ch3: " << ch3 << endl;

    return 0;
}
