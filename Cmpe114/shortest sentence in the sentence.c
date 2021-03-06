#include<stdio.h>
#include<string.h>

int main(){
char sentence[100];
char word[100];
printf("Enter a sentence:");
gets(sentence);
int j=0,min,i,x,y,z=0;
x=strlen(sentence);
min=x;
for(i=0;i<x;i++){
    j=j+1;
    if(sentence[i]==' ')
    {   if(j<min){
            min=j;
            y=i-j;
            z=0;
            while(y<i){
                word[z]=sentence[y];
                y++;
                z++;
            }
            }

            j=0;
    }
}
printf("Shortest word in sentence is %s",word);
return 0;
}

