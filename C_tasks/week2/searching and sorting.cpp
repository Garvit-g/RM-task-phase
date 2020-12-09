#include <iostream>
using namespace std;

void bubblesort(int array[],int x);
void selectionsort(int array[],int x);
void binary_s(int array[],int x,int num);

int main()
{
int n,a[100],i,snum;
char t;
 cout << "enter the number of items\n";
 cin >> n;
 cout << "enter the numbers to be sorted\n";
 for(i=0;i<=n-1;i++)
        {
        cin >> a[i];
        }

cout << "enter the type sorting technique\n";
cin >> t;
if(t=='b')
    {
    bubblesort(a,n);
    }
if (t=='s')
    {
    selectionsort(a,n);
    }
cout << "the array is sorted\n";
cout << "enter the number to be searched\n";
cin >> snum;
binary_s(a,n,snum);
}
void bubblesort(int array[],int x)
{
int i,j,t;
for(i=0;i<=x-2;i++)
    {
    for(j=0;j<=x-2;j++)
        {
        if(array[j]>=array[j+1])
            {t=array[j];
            array[j]=array[j+1];
            array[j+1]=t;
            }
        }
    }
for(i=0;i<=x-1;i++)
        {
        cout << array[i] << " ";
        }
}
void selectionsort(int array[],int x)
{
int i,j,pos,small;
for(i=0;i<x-1;i++)
    {
    pos=i;
    small=array[i];
    for(j=i+1;j<x;j++)
        {
        if(small>=array[j])
            {
            pos=j;
            small=array[j];
            }
        }
    array[pos]=array[i];
    array[i]=small;

    }
for(i=0;i<=x-1;i++)
        {
        cout << array[i] << " ";
        }
}
void binary_s(int array[],int x,int num)
{
int low,high,mid;
low=0;
high=x-1;
do
    {
    mid=(low+high)/2;
    if(num<array[mid])
        {
        high=mid-1;
        }
    else
        {
        low=mid+1;
        }
    }while(array[mid]!=num && low<=high);
    cout << "the position of number is " << mid+1;
}


