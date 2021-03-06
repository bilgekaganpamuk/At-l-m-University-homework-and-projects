#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  float a, b, c;
  char V;
    
    printf("What is your vehicle type C(Car)/T(Truck) ?\n");
    scanf("%c", &V);
    
  switch (V)
    { 
    case'C':
    case'c':
    	printf("You picked Car.\n");
		break;
	case'T':
	case't':
		printf("You picked Truck.\n");
		break;
	default:
		printf("Try again.\n");
		system("PAUSE");
		return(0);
	}
    

	printf("How many minutes did u park?\n");
    scanf("%f", &a);
    a = a / 60;
    
	
    switch (V)
    {
    case't':
    case'T':
		if( a < 5)
    	b = 5.50 * a;
    	if( a >= 5)
    	b = 25 + (4.50 * (a/5));
        printf("Total Charge:%f\n", b);
        break;
    case'C':
    case'c':
    	if( a < 2 )
    	c = 2.50 * a;
    	if(( a > 2 ) && ( a < 4 ))
    	c = 4.50 + (2.25 * (a/2));
    	if( a > 4 )
    	c = 8 + (2.00 * (a/4));
        printf("Total Charge:%f\n", c);
		break;
	}
    
    system("PAUSE");
    return(0);
 
}
