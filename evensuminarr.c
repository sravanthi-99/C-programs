//sum of even elements in an array
#include<stdio.h>
int main() 
{
    int a[10],i,n, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
    }
    printf("\n%d",sum);
    return 0;
}
