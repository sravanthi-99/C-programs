//given number is palindrome or not
#include<stdio.h>
int main() 
{
    int orginalnum,n,rem, rev=0;
    scanf("%d", &orginalnum);
    n=orginalnum;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(orginalnum==rev)
    {
        printf("%d is palindrome",orginalnum);
    }
    else
    {
        printf("%d is not palindrome",orginalnum);
    }
    return 0;
}
