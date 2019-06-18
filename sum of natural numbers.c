#include<stdio.h>
int main()
{
    int num,it,tot=0;
    scanf("%d",&num);
    for(it=1;it<=num;it++)
    {
        tot=tot+it;
    }
    printf("%d",tot);
    return 0;
}
