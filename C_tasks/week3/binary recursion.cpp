#include <iostream>

int binary_search(int b[],int low,int high, int p);

int main()
{
int a[100],n,num,i,t;
std::cout << "enter the number of elements of the sorted array";
std::cin >> n;
std::cout << "enter the sorted array";
for(i=0;i<=n-1;i++)
{std::cin >> a[i];}
std::cout << "enter the number to be searched";
std::cin >> num;
//binary_search(a,0,n-1,num);
t=binary_search(a,0,n-1,num);
if(t==-1)
std::cout << "the number is not present in the array";
else
std::cout << "the index of number is" << t+1;

}
int binary_search(int b[],int low, int high, int p)
{
int mid;
if(high<0 || low>high)
    return -1;
/*if(low==high)
{
    if(p==b[low])
        return low;
    else
        return -1;

}*/
mid=(high+low)/2;
if(p==b[mid])
{
    //std::cout << "the search was a success and its index is" << mid;
    return mid;
}

else if(p<b[mid])

    binary_search(b,low,mid-1,p);
else if(p>b[mid])
    binary_search(b,mid+1,high,p);

//return mid;

}
