//check number is positive or negative or zero
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else if(n==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}
