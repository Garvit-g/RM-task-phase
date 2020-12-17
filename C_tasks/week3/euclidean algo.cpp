#include <iostream>
using namespace std;

int gcd(int a,int b);

int main()
{
int a,b;
cout << "enter the two numbers";
cin >> a >> b;
cout << "Greatest common divisor is" << gcd(a,b);
}
int gcd(int a,int b)
{
if(b==0)
return a;
gcd(b,a%b);
}
