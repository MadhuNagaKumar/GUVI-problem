#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100],temp;
    scanf("%s",&a);
    for(i=0;i<strlen(a);i=i+2){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    printf("%s",a);
    return 0;
}
