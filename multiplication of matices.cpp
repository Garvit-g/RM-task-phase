#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
cout << "enter dimensions of first matrice";
cin >> m;
cin >> n;
cout << "enter dimension of second matrice";
cin >> p;
cin >> q;
if(n!=p)
    {
    cout << "multiplication is not possible";
    exit(0);
    }
//exit(0);
cout << "enter elements for first matrice";
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        cin >> a[i][j];
        }
    }
cout << "enter elements for second matrice";
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        cin >> b[i][j];
        }
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
        {
        c[i][j]=0;
        for(k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
cout << "the product matrix is\n";
for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
        {
        cout << c[i][j]  ;

        }
    cout << "\n";
    }
}
