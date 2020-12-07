#include <iostream>
using namespace std;
int main()
{
int a[10][10],m,n,i,j,k,l,p,q,b[10][10];
cout << "enter dimensions of the matrix";
cin >> m;
cin >> n;
cout << "enter elements of matrix";
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        cin >> a[i][j];
        }
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        b[i][j]=a[i][j];
        }
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        if(a[i][j]==0)
            {
            p=i;
            q=j;
            //cout << a[p][q] << "\n";
            for(k=0;k<n;k++)
                {
                b[p][k]=0;
                }
            for(l=0;l<m;l++)
                {
                b[l][q]=0;
                }
            }
        else
            {
            continue;
            }
        }
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        {
        cout << b[i][j] << " ";
        }
    cout << "\n";
    }
}
