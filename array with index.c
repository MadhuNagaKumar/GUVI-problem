#include<stdio.h>
int main()
{
    int a[10],n,i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     printf("%d %d\n",a[i],i);   
    }
    return 0;
}
