//operation using switch
#include<stdio.h>
int main() 
{
    int a, b;
    char op;
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':printf("The addition is %d",a+b);
        break;
        case '-':printf("The subtraction is %d",a-b);
        break;
        case '*':printf("The multiplication is %d",a*b);
        break;
        case '/':printf("The division is %d",a/b);
        break;
        case '%':printf("The remainder is %d",a%b);
        break;
        default:printf("Invalid operator");
        break;
    }
    return 0;
}
