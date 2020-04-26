#include<stdio.h>
int main()
{
    int i,limit,values[100],sum=0;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {
        scanf("%d",&values[i]);
    }
    for(i=0;i<=limit;i++)
    {
        sum=sum+values[i];
    }
    printf("the sum is %d", sum);
    return(0);
}
