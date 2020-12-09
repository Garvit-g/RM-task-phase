#include <iostream>
#include <string.h>
using namespace std;

void sorted_strings(char strings[100][100],int n);

int main()
{
char strings[100][100];
int n,i;
cout << "enter the number of strings";
cin >> n;
cout << "enter the strings";
i=0;
while(i<n)
{
cin >> strings[i++];
}

sorted_strings(strings,n);
}
void sorted_strings(char strings[100][100],int n)
{
char temp[100];
char t;
int i,j,k,x;
for(i=0;i<=n-2;i++)
    {
    for(j=0;j<=n-2;j++)
        {
        if(strcmp(strings[j],strings[j+1])>0)
            {
            strcpy(temp,strings[j]);
            strcpy(strings[j],strings[j+1]);
            strcpy(strings[j+1],temp);
            }
        }
    }
cout << "the sorted strings are\n";
for(i=0;i<=n-1;i++)
    {
    cout << strings[i] << "\n";
    }
for(k=0;k<=n-1;k++)
{
    x=strlen(strings[k]);
    for(i=0;i<x-1;i++)
        {
        for(j=0;j<x-1;j++)
            {
            if((strings[k][j]>strings[k][j+1]))
                {
                t=strings[k][j];
                strings[k][j]=strings[k][j+1];
                strings[k][j+1]=t;
                }
            }
        }
}
cout << "the individually sorted strings" << "\n";
for(i=0;i<=n-1;i++)
    {
    cout << strings[i] << "\n";
    }
}
