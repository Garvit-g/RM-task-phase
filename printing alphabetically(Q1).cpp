#include <iostream>
#include <string.h>
using namespace std;

int main(){
char arr[100],arr2[100];
int t,i,j,k,arr1[100],temp;
cout << "enter the word";
cin >> arr;
cout << arr << "\n";
t=strlen(arr);
//cout << t;
for(i=0;i<=t-1;i++)
    {
    arr1[i]=arr[i];
    }
for(i=0;i<=t-2;i++)
    {
    for(j=0;j<=t-2;j++)
        {
        if(arr1[j]>=arr1[j+1])
            {
            temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            }
         else
            continue;
        }

    }
for(k=0;k<=t-1;k++)
    {
    arr2[k]=arr1[k];
    }
cout << arr2;
return 0;
}


