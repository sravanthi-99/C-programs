//sum of elements in an array
#include<stdio.h>
int main() 
{
    int a[10], i, n, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d", sum);
    return 0;
}
