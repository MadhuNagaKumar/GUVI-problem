#include <stdio.h>

int main()
{
    int a,b,n[10],m[10],i,j,c=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<b;i++){
        scanf("%d",&m[i]);
    }
    if(a>b){
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(n[i]==m[j]){
                    c++;
                }
            }
        }
        if(c==b){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("no");
    }
    return 0;
}
