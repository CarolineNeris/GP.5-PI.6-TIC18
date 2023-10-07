#include<iostream>

using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b;
    c=4*a+b/3-5;
    cout<<"c: "<<c<<endl;
    c=4*(a+b)/(3-5);
    cout<<"c: "<<c<<endl;
    //A utilização dos parenteses, dando prioridade às adição e 
    //subtração modificam o resultado.
    c=4*(a+b/3-5);
    cout<<"c: "<<c<<endl;
    cout<<"c: "<<(a*a)+2*b+c << endl;
    

    return 0;
}