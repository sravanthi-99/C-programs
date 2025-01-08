//average of elements in an array
#include<stdio.h>
int main() 
{
    int a[10],sum=0,i, n;
    float avg;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f", avg);
    return 0;
}
