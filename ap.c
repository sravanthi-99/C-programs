//Arithmeticprogression
#include<stdio.h>
int main() 
{
    int a1, a2, n, d;
    scanf("%d%d%d", &a1, &a2, &n);
    d=a2-a1;
    printf("%d",a1+(n-1)*d);
    return 0;
}
