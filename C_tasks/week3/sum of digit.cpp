#include <iostream>

int sum_of_dig(int n);

int main()
{
int num;
std::cout << "Enter the number";
std::cin >> num;
std::cout << "the sum of digits is" << sum_of_dig(num);
}
int sum_of_dig(int n)
{
int sum,temp;
temp=n%10;
n=n/10;
sum=sum+temp+sum_of_dig(n);
return (sum);

}
