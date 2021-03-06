#include<stdio.h>
void findletter(char sentence[100],int *a,int *b);
int main(){ int lower=0,upper=0;
    char sentence[100];
printf("Enter a sentence which finishes with '.' \n");
gets(sentence);
findletter(sentence,&lower,&upper);
printf("lower case= %d upper case=%d",lower,upper);
return 0;
}
void findletter(char sentence[100],int *a,int *b){
int i=0;
wh ile(sentence[i]!='.')
{
    if (sentence[i]>='A'&&sentence[i]<='Z')
        *b=*b+1;
    if (sentence[i]>='a'&&sentence[i]<='z')
        *a=*a+1;
i++;
}

}
