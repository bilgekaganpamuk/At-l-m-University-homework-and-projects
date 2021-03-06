#include<stdio.h>

int main(){
int i=0,count=1;
char sentence[100];
printf("Enter a line:(must be done with '.')");
gets(sentence);
while(sentence[i]!='.')
{
    count=count+1;
    i++;
}
i=0;
while(i<count){
    if(sentence[i]>=65&&sentence[i]<=90){
        sentence[i]=sentence[i]+32;
    }
i=i+1;
}
printf("%s",sentence);
return 0;
}
