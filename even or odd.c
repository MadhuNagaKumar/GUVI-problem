#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0&&num>0)
    {
        printf("Even");
    }
    else if(num%2!=0&&num>0)
    {
        printf("Odd");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
