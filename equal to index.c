#include<stdio.h>
#include<string.h>
int main(){
    int a,b[10],c[10],d=0,i,j,t=0,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        if(i==b[i]){
            c[d]=b[i];
            d++;
        }
        else{
            count++;
        }
    }
    if(count>=a){
        count=-1;
        printf("%d",count);
    }
    else{
        for(i=0;i<d;i++){
            for(j=i+1;j<d;j++){
                if(c[i]>c[j]){
                    t=c[i];
                    c[i]=c[j];
                    c[j]=t;
                }}
        }
        for(i=0;i<d;i++){
            printf("%d ",c[i]);
        }
    }
    return 0;
}
