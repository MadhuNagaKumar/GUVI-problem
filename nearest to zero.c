#include <stdio.h>

int main()
{
    int a,b[10],i,j,d=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if((b[i]>0&&b[j]<0)||(b[i]<0&&b[j]>0)){
                d=b[i]+b[j];
            }
            else{
                d=b[i]-b[j];
            }
            if(d==0){
                printf("%d %d",b[i],b[j]);
            }
        }
    }
    return 0;
}
