#include <stdio.h>

int main()
{
    int a,b,n[10],i,j,c=0;
    scanf("%d %d",&a,&b);
    if(a>=b){
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(n[i]<n[j]){
                c=n[i];
                n[i]=n[j];
                n[j]=c;
            }
        }
    }
    for(i=0;i<b;i++){
        if(i==b-1){
            printf("%d",n[i]);
            break;
        }
    }
    }
    return 0;
}
