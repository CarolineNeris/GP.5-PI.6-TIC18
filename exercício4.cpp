#include <iostream>
using namespace std;

int main (){
    double x, y, z;
    cout << "Forneça duas variáveis do tipo flutuantes separadas por espaço: " << endl;
    scanf("%lf", &x, &y);
    z = x+y;
    cout << z << endl;
    z = (x + y) / 2;
    cout << "Média de x e y: " << z << endl;

    z = x * y;    
    cout << "Produto de x e y: " << z << endl;

    z = (x > y) ? x : y;
    cout << "Maior valor entre x e y: " << z << endl;

    z = (x < y) ? x : y;
    cout << "Menor valor entre x e y: " << z << endl;
    

     return 0;
}    