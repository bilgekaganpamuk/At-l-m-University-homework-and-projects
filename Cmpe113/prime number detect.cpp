#include<stdio.h>
int main()
{
	int i,a,c,b;
	printf("enter a number for prime chechk:\n");
	scanf("%d",&a);
	i=2;
	while(i<a)
	{
		
		c=a%i;
		if(c==0)
		{
			printf("%d is not prime",a);
			break;
		}
		if((c<0||c>0)&&i==(a-1))
		{
			printf("%d is prime",a);
			break;
		}
			i++;	
	}

	
	return(0);
}
