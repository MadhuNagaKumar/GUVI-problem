#include<stdio.h>
int main()
{
    int a[25],n1,k2,tot=0,i;
    scanf("%d %d",&n1,&k2);
    for(i=1;i<=n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k2;i++)
    {
        tot=tot+a[i];
    }
    printf("%d",tot);
    return 0;
}
