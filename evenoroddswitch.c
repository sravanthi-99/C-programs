//even or odd using switch
#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    switch(a%2)
    {
        case 0:printf("Even");
        break;
        default:printf("Odd");
        break;
    }
    return 0;
}
