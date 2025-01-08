//factoriol of a number
#include <stdio.h>
int main()
{
    int i, n;
    long int res=1;
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        res=res*i;
    }
    printf("%ld",res);
    return 0;
}
