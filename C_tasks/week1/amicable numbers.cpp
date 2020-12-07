#include <iostream>
using namespace std;
int main()
{
int a,b,i,j,rem,sum1,sum2;
sum1=0;
sum2=0;
cout << "enter the first number";
cin >> a;
cout << "enter the second number";
cin >> b;
for(i=1;i<=a/2;i++)
    {
    rem=a%i;
    if(rem==0)
        {
        sum1=sum1+i;
        }
    }
for(j=1;j<=b/2;j++)
    {
    rem=b%j;
    if(rem==0)
        {
        sum2=sum2+j;
        }
    }
if(a==sum2 && b==sum1)
    {
    cout << "the numbers are amicable";
    }
else
    cout << "the numbers are not amicable";
}
