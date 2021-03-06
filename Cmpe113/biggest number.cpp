#include<stdio.h>
int main()
{
	int c,a,b,sum;
	printf("enter the count of integers:\n");
	scanf("%d",&a);
	c=0;
	sum=0;
	while(c<a)
	{
		printf("enter a digit:\n");
		scanf("%d",&b);
		if(sum<b)
		{
			sum=b;
		}
		c=c+1;
	}
	printf("biggest number is : %d",sum);
	return(0);
}
