#include<stdio.h>
int main()
{
	int a,f,c,c1,sum,d;
	 c=0; 
	printf("enter the term for fiboncaci:\n");
	scanf("%d",&a);
	printf("\n");
	while(c<a)
	{
		c1=0; sum=0; d=0;f=1;
		while(c1<=c)
		{
		sum=f+d;
		d=f;
		f=sum;
		printf("%d\t",sum);
		c1++;
		}
		printf("\n\n");
		c++;
	}
	return(0);
}
