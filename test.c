#include <stdio.h>
int main()
{
	int p;
	float r,n,si;
	printf("enter the values");
	scanf("%d %f %f", &p,&r,&n);
	si= (p*r*n)/100;
	printf("the simple interest is %f",si);
	return(0);
}


