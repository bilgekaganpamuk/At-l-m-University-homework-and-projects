#include<stdio.h>
main()
{
	char sentence[15];
	
	
	printf("Enter the sentence:\n ");
	
	gets(sentence); 
	
	int i=0;
	while(sentence[i]!='.')
	{
		if(sentence[i]=='A')
		   sentence[i]='U';
		else if(sentence[i]=='E')
		   sentence[i]='O';
		i++;
	}
	
	printf(" %s ", sentence);
	
	
	return(0);
}
