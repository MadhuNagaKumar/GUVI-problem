#include<stdio.h>
int main()
{
    int tm,count=0;
    scanf("%d",&tm);
    while(tm>=60)
    {
        tm=tm-60;
        count++;
    }
    printf("%d %d",count,tm);
    return 0;
}
