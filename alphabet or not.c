#include<stdio.h>
int main()
{
    char num;
    scanf("%c",&num);
    if((num>='a'&&num<='z')||(num>='A'&&num<='Z'))
    {
       printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}
