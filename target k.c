#include <stdio.h>

int main()
{
    int a,b,n[10],i,j,c=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if((n[i]+n[j])==b){
                c++;
            }
        }
    }
    if(c>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
