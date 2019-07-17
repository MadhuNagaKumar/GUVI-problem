#include <stdio.h>
int main()
{
    int a[2],b[2],c[2],i,j=0;
        for(i=0;i<2;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<2;i++){
            scanf("%d",&b[i]);
        }
        for(i=0;i<2;i++){
            scanf("%d",&c[i]);
        }
        for(i=0;i<2;i++){
            if((a[i]==b[i])&&(a[i]==c[i])){
                j=1;
            }
            if((a[i]==a[i+1])&&(b[i]==b[i+1])&&(c[i]==c[j])){
                j=1;
            }
        }
        if(j>0){
            printf("yes");
        }
        else{
            printf("no");
        }
    return 0;
}
