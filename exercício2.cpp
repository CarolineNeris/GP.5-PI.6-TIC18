#include <iostream>
using namespace std;

int main (){
    int a, b, c;
    cout << "Fornça a e b (respectivamente): " << endl;
    cin >> a >> b ;
    c = 4 * a + b / 3 - 5 ;
    cout << "O resultado para os valores de a e b fornecido é: " << c << endl;
    c =  4 * (a + b) / (3 - 5);
    cout << "Aplicando adequadamente o '()' é:" << c << endl;

    // A primeira continha aplicando a=5 e b=6 retorna o valor 17 enquanto que na segunda retorna 22,
    // Isso ocorre o sistema realiza primeiro os produtos depois as adições. Na segunda tentativa ele prioriza 
    // os termos que estão entre parênteses


    c= (a*a)+(2*b)+c;
    cout << "O resultado é: " << c << endl;

    return 0;
}