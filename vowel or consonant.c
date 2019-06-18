#include<stdio.h>
int main()
{
    char num;
    scanf("%c",&num);
    if((num>='a'&&num<='z')||(num>='A'&&num<='Z'))
    {
       if(num=='a'||num=='e'||num=='i'||num=='o'||num=='u'||num=='A'||num=='E'||num=='I'||num=='O'||num=='U')
       {
          printf("Vowel");
        }
        else
        {
          printf("Consonant");
        }   
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
