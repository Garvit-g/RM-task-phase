#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int num,t1,t2,i,j,t,octal,rem,binary,hexadecimal,t3;
//char hexadecimal;
cout << "enter the number to be converted";
cin >> num;
cout << num << "\n";
t1=num;
t2=num;
t3=num;
i=1;
j=0;
octal=0;
while(num!=0)
    {
    t=pow(8,i);
    rem=num%t;
    num=num/t;
    octal=octal+rem*pow(10,j);
    i++;
    j++;
    }
//cout << i << j << t << rem << num;
cout << "the octal number is\n";
cout << octal << "\n";
i=1;
j=0;
binary=0;
rem=0;
while(t1!=0)
    {

    t=2;
    rem=t1%t;
    t1=t1/t;

    binary=binary+rem*pow(10,j);
    i++;
    j++;
    }
cout << "the binary number is" << binary << "\n";
i=1;
j=0;
hexadecimal=0;
rem=0;
while(t2!=0)
    {
    t=pow(16,i);
    rem=t2%t;
    t2=t2/t;
    hexadecimal=hexadecimal+rem*pow(10,j);
    i++;
    j++;
    }
    if(t3==10)
    cout << "a";
    else if(t3==11)
    cout << "b";
    else if(t3==12)
    cout << "c";
    else if(t3==13)
    cout << "d";
    else if(t3==14)
    cout << "e";
    else if(t3==15)
    cout << "f";
    else
    cout << "the hexadecimal number is\n" << hexadecimal << "\n";
}
