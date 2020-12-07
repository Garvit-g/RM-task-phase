#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int num,rem,i,a[100],n=0,j,k,l,flag,peak;
cout << "enter the number";
cin >> num;
for(i=1;i<=100 && num!=0;i++)
    {
    rem=num%10;
    a[i]=rem;
    cout << a[i];
    num=num/10;
    n++;
    }
    cout << n;
/*while(num!=0)
    {
    rem=num%10;
    for(i=0;i<=100;i++)
    {a[i]=rem;
    cout << a[i];}
    num=num/10;
    n++;*/

for(j=1;j<=n;j++)
    {
    if(a[j]==a[j+1])
        {
        cout << "same digts: the number is not a hill number";
        exit(0);
        }
    }
if(a[1]>a[2] || a[n-1]<a[n])
    {
    cout << "first and last digit problem: the number is not a hill number";
    exit(0);
    }
for(k=1;k<=n;k++)
    {
    if(a[k]<a[k+1])
    {
     continue;
    }
    else
        {
        peak=k;
        break;
        }
    }
for(l=peak;l<n;l++)
    {
    if(a[l]>a[l+1])
    {flag=1;}
    else
    {flag=0;
    break;}
    }
if(flag==1)
    {cout << "the number is a hill number";}
if(flag==0)
    {cout << "the number is not a hill number";}
}
