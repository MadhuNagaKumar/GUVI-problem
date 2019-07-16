#include<stdio.h>
#include<string.h>
 
int main(){
    int a,b[10],i,j,num=0,mul=1,mul2=1,t;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(b[i]<b[j]){
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=0;i<a;i++){
        for(j=a-1-i;j>0;j--){
            mul=mul*10;
        }
        mul2=b[i]*mul;
        mul=1;
        num=num+mul2;
    }
    printf("%d",num);
    return 0;
}
