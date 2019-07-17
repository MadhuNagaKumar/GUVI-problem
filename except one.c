#include <stdio.h>
int main()
{
    int a,n[10],i,j,t=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(n[i]==n[j]){
                t++;
            }
        }
        if(t==1){
            printf("%d",n[i]);
        }
        t=0;
    }
    return 0;
}
