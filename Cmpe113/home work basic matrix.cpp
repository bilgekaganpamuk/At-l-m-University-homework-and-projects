#include<stdio.h>
void printPatern(int lines);
void print(int a,int c1, int c,int b);
void print1(int a,int c1, int c,int b);
int main()
{	int a;
	do{
	printf("enter a integer greater than 0:");
	scanf("%d",&a);
	}while(a<0);
	printPatern(a);
}
void printPatern(int lines)
{
int a=lines-1;	int b=lines-a; int c=0; int c1=0; int c2;
for(c2=0;c2<lines;c2++){
print(a,c1,c,b);
printf("\n");
b++; a--;
} 
a=lines-1; b=lines-a; c=0; c1=0; int c3;
for(c3=0;c3<lines-1;c3++)
{print1(a,c1,c,b);
printf("\n");
b++;a--;
}
}
void print(int a,int c1,int c,int b)
{
	while (c<a)
{
	printf(".");
	c=c+1;
}
while(c1<b)
{
	printf("*");
	c1=c1+1;
}
}
void print1(int a,int c1, int c,int b)
{while(b>c1)
{
	printf(".");
	b--;
}	
	while (a>c)
{
	printf("*");
	a--;
}

}
