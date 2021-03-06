#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f,e,a,c,c1,c2,d,c3,b;
	 c2=0;
	printf("Enter the lenght of the square:\n");
	scanf("%d",&a);
	d=a-1;
	
	for(c=0;c<a;)
	{

		if(c==0)
		{c1=0;
		while(c1<a)
		{
		printf("*");
		c1=c1+1;
		}
		}	
		if(c<a-2)
		{
		printf("\n");
		while(c2<a)
		{
			b=a-2;
		if(c2==0||c2==b)
		{
			printf("*");
		}
		printf(" ");
		c2=c2+1;
		}c2=0;
}c=c+1;

}
printf("\n");
c3=0;
while(c3<a)
{
	printf("*");
	c3=c3+1;
}
printf("\n");
	system("PAUSE");
	return(0);
}
