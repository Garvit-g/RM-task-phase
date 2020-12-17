#include <iostream>
#include <stdio.h>

int factorial(int n);
int main()
{
int num;
std::cout << "enter the number";
std::cin >> num;
std::cout << "the factorial of number is" << factorial(num);
}
int factorial(int n)
{
int fact;

if(n==1)
{return 1;}
else
{fact=n*factorial(n-1);
return (fact);}


}
