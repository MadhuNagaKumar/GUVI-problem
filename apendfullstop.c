#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],t;
    int l,i;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l+1;i++){
        if(i==l){
            t=a[i];
            a[i]='.';
            a[i+1]=t;
        }
    }
    printf("%s",a);
    return 0;
}
