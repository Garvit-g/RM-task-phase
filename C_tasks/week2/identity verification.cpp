#include <iostream>
using namespace std;

void matrix_mul(int a[100][100],int b[100][100],int c[100][100],int m,int n,int p,int q);
void transpose(int d[100][100],int dt[100][100],int x,int y);

int main()
{
int m,n,p,q,i,j,a[100][100],b[100][100],c[100][100],at[100][100],bt[100][100],ct[100][100],right[100][100],flag;
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
matrix_mul(a,b,c,m,n,p,q);
for(i=0;i<=m-1;i++)
    {
     for(j=0;j<=q-1;j++)
        {
        cout << c[i][j] << " " ;
        }
    cout << "\n";
    }

transpose(c,ct,m,q);
for(i=0;i<=m-1;i++)
    {
     for(j=0;j<=q-1;j++)
        {
        cout << ct[i][j] << " " ;
        }
    cout << "\n";
    }
transpose(a,at,m,n);
for(i=0;i<=m-1;i++)
    {
     for(j=0;j<=n-1;j++)
        {
        cout << at[i][j] << " " ;
        }
    cout << "\n";
    }
transpose(b,bt,p,q);
for(i=0;i<=p-1;i++)
    {
     for(j=0;j<=q-1;j++)
        {
        cout << bt[i][j] << " " ;
        }
    cout << "\n";
    }
matrix_mul(bt,at,right,q,p,n,m);
for(i=0;i<=q-1;i++)
    {
     for(j=0;j<=m-1;j++)
        {
        cout << right[i][j] << " " ;
        }
    cout << "\n";
    }
for(i=0;i<=m-1;i++)
    {
    for(j=0;j<=q-1;j++)
        {
        if(ct[i][j]==right[i][j])
            flag=1;
        else
        flag=0;
        }
    }
if(flag==1)
    cout << "the theorem is verified";
else
    cout << "the theorem is not verified";

}
void matrix_mul(int a[100][100],int b[100][100],int c[100][100],int m,int n,int p,int q)
{
    int i,j,k;
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


}
void transpose(int d[100][100],int dt[100][100],int x,int y)
{
    int i,j;
for(i=0;i<=x-1;i++)
    {
        for(j=0;j<=y-1;j++)
        {
        dt[j][i]=d[i][j];
        }
    }

}

