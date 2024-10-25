//check number is even or odd
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
