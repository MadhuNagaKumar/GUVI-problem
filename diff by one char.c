#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int l1,l2,i,j,count=0;
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2){
        for(i=0;i<l1;i++){
            for(j=0;j<l2;j++){
                if(a[i]!=b[j]){
                    count++;
                }
            }
        }
    }
    if(count==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
