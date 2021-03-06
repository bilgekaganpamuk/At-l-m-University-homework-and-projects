#include<stdio.h>
#include<stdlib.h>
void sum_of_digits(int digit,int *sum){
int x;
while(digit>1){
x=digit%10;
*sum=*sum+x;
digit=digit/10;}
}

int main(){
    int a,sum=0;
printf("Enter a integer\n");
scanf("%d",&a);
sum_of_digits(a,&sum);
printf("sum = %d",sum);
return 0;
}
