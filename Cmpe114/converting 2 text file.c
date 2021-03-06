#include<stdio.h>
#include<stdlib.h>
int main()
{
int num;
FILE *fp1,*fp2,*fp12;
fp12=fopen("num12.txt","w");
fp1=fopen("num1.txt","a");
fp2=fopen("num2.txt","r");
while(fscanf(fp1,"%d",&num)!=EOF){
    fprintf(fp12,"%d\n",num);
    }
while(fscanf(fp2,"%d",&num)!=EOF){
    fprintf(fp12,"%d\n",num);
}
fclose(fp1);
fclose(fp2);
fclose(fp12);
return 0;
}
