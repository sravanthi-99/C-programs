//Area of triangle using Heron's formula
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("Enter side lengths of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle:%f",area);
}
