#include<stdio.h>
#include<string.h>
 
int main(){
    int a,b[10],i,d=0,j,t[10],count=0,u=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        j=i%2;
        d=b[i]%2;
        if((j!=0&&d==0)||(j==0&&d!=0)){
            printf("%d ",b[i]);
        }
    }
    return 0;
}
