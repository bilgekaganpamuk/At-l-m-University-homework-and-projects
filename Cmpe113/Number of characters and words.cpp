 	#include<stdio.h>
main()
{
	char sentence[15];
	int charcounter, wordcounter;
	
	printf("Enter the sentence: ");
	gets(sentence); 
	
	int i=0;
	while(sentence[i]!='.')
	{
		if(sentence[i]==' ')
		   wordcounter++;
		charcounter++;
		i++;
	}
	charcounter++; //Döngüde noktayý saymadýðý için sonradan ekledim.
	printf("Number of characters: %d \n", charcounter);
	printf("Number of words: %d \n", wordcounter);
	
	return(0);
}
