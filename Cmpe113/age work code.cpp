#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a,b,c,d,e,f;
	c=0;
	f=0;
	char V ;
	d=0;
	e=0;
	printf("Enter number of workers:\n");
	scanf("%d",&a);
	while(c<a)
	{
		printf("enter sex code(0 for male 1 for female):\n");
		scanf("%d",&V);
	
		printf("Enter the age of worker:\n");
		scanf("%d",&b);

		switch(V)
		{
			case 1:
				{
				
				if(b<25)
				{
					d= d + 1;
				}
					if(b>=25)
				{
					f=f+1;
				}
			
			break;
		}
			case 0:
			{
			
				if(b>55)
				{
					e++;
				}
				if(b<=55)
				{
					f=f+1;
				}
			
			break;
		  }

		}
		
		c++;
	}
	printf("you entered %d invalid age\n",f),
	printf("Number of female workers below the age 25 is %d\n",d);
	printf("number of male workers over the age 55 is %d\n",e);
	system("PAUSE");
	return(0);
}
