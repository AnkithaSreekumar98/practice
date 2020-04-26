#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i%2==1)
    {
        printf("%d",i);
        sum=sum+i;
    }
    return(0);
}
