//reverse of given number
#include<stdio.h>
int main() 
{
    int orginalnum,n,rem, arm=0;
    scanf("%d", &orginalnum);
    n=orginalnum;
    while(n>0)
    {
        rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(orginalnum==arm)
    {
        printf("%d is Armstrong number",orginalnum);
    }
    else
    {
        printf("%d is not Armstrong number",orginalnum);
    }
    return 0;
}
