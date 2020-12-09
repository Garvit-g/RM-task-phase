#include <iostream>
using namespace std;

void stringcopy(char *sp);

int main()
{
char word[100];
cout << "enter the word";
cin >> word;
stringcopy(word);
}
void stringcopy(char *sp)
{
char name[100];
int i;
i=0;
while(*sp!='\0')
    {
    name[i]=*sp;
    //*sp++;
    //cout << *sp;
     sp++;
     i++;
    }
name[i]='\0';
cout << "the string given was " << name;
}
