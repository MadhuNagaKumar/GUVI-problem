#include <stdio.h>
int main()
{
    int n,r = 0,m;
    scanf("%d", &n);
    while(n != 0)
    {
        m = n%10;
        r = r*10 + m;
        n = n/10;
    }
    printf("%d",r);
    return 0;
}
