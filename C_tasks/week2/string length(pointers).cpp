#include <iostream>
using namespace std;

int lofstring(char *sp);

int main()
{
int t;
char word[100];
cout << "enter the word";
cin >> word;
t=lofstring(word);
cout << "the length of the string is " << t;
}
lofstring(char *sp)
{
int l;
while(*sp!='\0')
    {
    l++;
    *sp++;
    }
return l;
}
