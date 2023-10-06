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

    return 0;
}

