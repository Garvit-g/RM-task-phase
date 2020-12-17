#include <iostream>

void bubble_sort(int b[],int n);
void print(int c[],int n);
int main()
{
int a[100],num,i;
std::cout << "enter the number of elements";
std::cin >> num;
std::cout << "enter the numbers to be sorted";
for(i=0;i<=num-1;i++)
    {
    std::cin >> a[i];
    }

bubble_sort(a,num);
print(a,num);
}
void bubble_sort(int b[],int n)
{

int i,t;
if(n==1)
{
    return;
}
for(i=0;i<=n-2;i++)
    {

    if(b[i]>=b[i+1])

    {t=b[i];
    b[i]=b[i+1];
    b[i+1]=t;}
    }
    bubble_sort(b,n-1);

}
void print(int c[],int n)
{
    int i;
  for(i=0;i<=n-1;i++)
    {
    std::cout << c[i] << " ";
    }

}
