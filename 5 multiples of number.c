#include<stdio.h>
int main()
{
    int num1,i,mul=0;
    scanf("%d",&num1);
    for(i=1;i<=5;i++)
    {
        mul=num1*i;
        printf("%d ",mul);
    }
    return 0;
}
