#include<stdio.h>
#include<string.h>
 
int main(){
    int a,b[10],i,d=0,j,t[10],count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(b[i]==b[j]){
                count++;
               }
               if(count>1){
                   t[i]=j;
                   break;
               }
            }
        count=0;
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(t[i]>=t[j]){
                d=t[i];
                t[i]=t[j];
                t[j]=d;
            }
        }
    }
    for(i=0;i<a;i++){
        if(t[i]!=0){
            d=t[i];
            printf("%d",b[d]);
            break;
        }
    }
    return 0;
}
