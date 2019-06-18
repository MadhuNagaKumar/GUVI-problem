#include<stdio.h>
int main()
{
    int num,k,po=1,i;
    scanf("%d %d",&num,&k);
    for(i=1;i<=k;i++)
    {
        po=po*num;
    }
    printf("%d",po);
    return 0;
}
