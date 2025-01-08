//number of duplicate elements in an array
#include<stdio.h>
int main() 
{
    int a[10],i, j, n, count=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                count++;
                break;
            }
        }
    }
    printf("\n%d",count);
    return 0;
}
