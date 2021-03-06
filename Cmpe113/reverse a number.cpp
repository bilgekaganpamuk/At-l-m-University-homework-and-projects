#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("enter a digit for reverse:\n");
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		a=a/10;
		b=c;
		printf("%d",b);
	}
printf("\n");
system("PAUSE");
return(0);
}
