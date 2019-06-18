#include<stdio.h>
int factorial(n)
{
    int fact=1,i;
    if(n==0)
    {
        fact=0;
    }
    else
    {
     for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }   
    }
    return fact;
}
int main()
{
    int num1,c;
    scanf("%d",&num1);
    c=factorial(num1);
    printf("%d",c);
    return 0;
}
