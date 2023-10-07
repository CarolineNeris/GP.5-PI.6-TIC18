#include<iostream>

using namespace std;

int main(){
    char ch1, ch2, ch3;
    cin>>ch1>>ch2;
    ch3 =ch1;
    ch3>30?cout<<"ch3: "<<ch3<<endl:cout<<"_"<<endl;
    cout<<"ch3: "<<showbase<<dec<<static_cast<int>(ch3)<<endl;
    cout<<"ch3: "<<showbase<<oct<<static_cast<int>(ch3)<<endl;
    cout<<"ch3: "<<showbase<<hex<<static_cast<int>(ch3)<<endl;

    ch3=ch2;
    printf("printf dec : ch3: %i\n",ch3);
    printf("printf oct : ch3: 0%o\n",ch3);
    printf("printf hex : ch3: 0x%x\n",ch3);
    ch3>30?printf("printf char: ch3: %c\n",ch3):printf("_\n");

    ch1>='A'&&ch1<='Z'?ch3='A':ch3=' ';
    cout<<"ch3: '"<<ch3<<"'"<<endl;

    ch2>='a'&&ch2<='z'?ch3='a':ch3=' ';
    cout<<"ch3: '"<<ch3<<"'"<<endl;

    ch1>='0'&&ch1<='9'||ch2>='0'&&ch2<='9'?ch3='1':ch3=' ';
    cout<<"ch3: '"<<ch3<<"'"<<endl;



    return 0;
}