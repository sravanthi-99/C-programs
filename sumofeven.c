//sum of even numbers 1 to n
#include<stdio.h>
int main() 
{
    int i,n,sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
           sum=sum+i;
        }
    }
    printf("%d ", sum);
    return 0;
}
