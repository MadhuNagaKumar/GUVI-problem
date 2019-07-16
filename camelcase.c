#include<stdio.h>
#include<string.h>
int main(){
    char a[5],b[5];
    int i;
    scanf("%s %s",a,b);
    for(i=0;i<5;i++){
        if(i==0){
            a[i]=a[i]-32;
            b[i]=b[i]-32;
            break;
        }
    }
    printf("%s %s",a,b);
    return 0;
}
