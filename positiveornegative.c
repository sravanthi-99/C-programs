//check number is positive or negative
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
    else
    {
        printf("Negative");
    }
    return 0;
}
