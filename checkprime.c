// given number is prime or not 
#include<stdio.h>
void main()
{
    int count=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
