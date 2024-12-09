//grade according to average
#include<stdio.h>
int main() 
{
    int tel, eng, mat, sci, soc;
    float avg;
    scanf("%d%d%d%d%d",&tel,&eng,&mat,&sci,&soc);
    avg=(tel+eng+mat+sci+soc)/5;
    if(avg>90)
    {
        printf("A+");
    }
    else if(avg<=90&&avg>80)
    {
        printf("A");
    }
    else if(avg<=80&&avg>70)
    {
        printf("B");
    }
    else if(avg<=70&&avg>60)
    {
        printf("C");
    }
    else if(avg<=60&&avg>50)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
