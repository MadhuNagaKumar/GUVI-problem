#include<stdio.h>
#include<string.h>
int main(){
    int a,b[10],i,j,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(b[i]==b[j]){
                count++;
            }
        }
        if(count==1){
            printf("%d",b[i]);
        }
        count=0;
    }
    return 0;
}
