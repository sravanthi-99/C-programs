//sum of digits in given number
#include<stdio.h>
int main() 
{
    int n, rem, sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits:%d",sum);
    return 0;
}
