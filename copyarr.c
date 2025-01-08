/*copying elements from one array to another array*/
#include<stdio.h>
int main() 
{
    int a[10], b[10],i, n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}
