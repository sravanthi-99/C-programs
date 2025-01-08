//prime numbers between 100 to 200
#include <stdio.h>
void main()
{
    int i,j, count=0;
    for (j=101;j<200;j++)
    {
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",j);
        }
        count=0;
    }
}
