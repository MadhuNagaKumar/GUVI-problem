#include<stdio.h>
#include<string.h>
 
int main(){
    char a[5],b[5];
    int l1=0,l2=0,i,c1,c2,d1=0,d2=0;
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2){
        for(i=0;i<l1-1;i++){
            c1=a[i]-'a';
            c2=a[i+1]-'a';
            d1=c1-c2;
            c1=b[i]-'a';
            c2=b[i+1]-'a';
            d2=c1-c2;
            if(d1!=d2){
                printf("NO");
                break;
            }
        }
        if(d1==d2){
            printf("yes");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}
