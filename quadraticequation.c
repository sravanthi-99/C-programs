//roots of Quadratic equation
#include<stdio.h>
#include<math.h>
int main() 
{
    int a, b, c, d;
    float r1, r2;
    printf("Enter a, b, c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("Roots are real and distinct\n");
        r1=(-b+sqrt(a))/(2*a);
        r2=(-b-sqrt(a))/(2*a);
        printf("Roots are %f and %f",r1,r2);
    }
    else if(d<0)
    {
        printf("Real and imaginary");
    }
    else 
    {
        printf("Roots are real and equal\n");
        r1=r2=-b/(2*a);
        printf("Roots are %f and %f",r1,r2);
    }
    return 0;
}
