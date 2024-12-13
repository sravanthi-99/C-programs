//difference between the sum of even numbers and sum of even numbers
#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int i,n,sum=0,sum1=0, diff;
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
           sum=sum+i;
        }
        else
        {
            sum1=sum1+i;
        }
    }
    diff=sum-sum1;
    printf("%d ", abs(diff));
    return 0;
}
