#include<stdio.h>
int main()
{
    int a[10],n,i,j,c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(a[i]>a[j])
         {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
         }   
        }
    }
    printf("%d",a[0]);
    return 0;
}
