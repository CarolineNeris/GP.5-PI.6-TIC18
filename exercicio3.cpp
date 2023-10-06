#include<iostream>

using namespace std;

int main(void){
    char ch1, ch2, ch3;

    cout << "Digite um caractere: " << endl;
    cin >> ch1;
    cout << "Digite outro caractere: " << endl;
    cin >> ch2;
    
    ch3 = ch1 -1;
    
    cout << "Caractere em formato decimal: " << int(ch3) << endl;

    cout << "Caractere em formato octal: " << oct << int(ch3) << endl;
    cout << dec; 

    cout << "Caractere em formato hexadecimal: " << hex << int(ch3) << endl;
    cout << dec;

    cout << "Caractere como caractere: " << (isprint(ch3) ? ch3 : '_') << endl;

    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';
    cout << "Valor de ch3 (condicional para ch1): " << ch3 << endl;

    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';
    cout << "Valor de ch3 (condicional para ch2): " << ch3 << endl;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "Valor de ch3 (condicional para dígitos): " << ch3 << endl;

    return 0;
}

