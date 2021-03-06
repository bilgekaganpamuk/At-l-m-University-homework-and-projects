#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
double checknumber();
double checknumber1();
double printfresult(double radius1,double height1);
double calculatevolume(double result,double height);
double calculatebasearea(double result);
double calculateperimeter(double result);
double calculatecirumference(double height,double perimeter,double area);
int main()
{
	double radius1; double height1;
	printfresult(radius1,height1);
	return 0;
}
double checknumber ()
{
    double a; 
	printf("Enter radius and height:");
   	scanf("%lf",&a);
    return a;
}
double checknumber1()
{
	double b;   
   	scanf("%lf",&b);
    return b;
}
double calculatebasearea(double result)
{
	double base_area;
	base_area=PI*result*result;
	return base_area;
}
double calculatevolume(double result,double height)
{
	double volume;
	volume=result*height;
	return volume;
}
double calculateperimeter(double result)
{
	double perimeter;
	perimeter=2*PI*result;
	return perimeter;
}
double calculatecirumference(double radius,double height,double perimeter,double area)
{
	double circumference; 
	circumference=calculateperimeter(radius)*height+calculatebasearea(radius)+calculatebasearea(radius);
	return circumference;
}
double printfresult(double radius1,double height1)
{	
    double height; double radius; double perimeter; double base_area;
    do{ radius=checknumber(); height=checknumber1();} while((radius<0||height<0)&&(height!=0&&radius!=0));
	while(height!=0&&radius!=0){
	printf("Cylender has %.2lf volume, and %.2lf circumference\n",calculatevolume(calculatebasearea(radius),height),calculatecirumference(radius,height,perimeter,base_area));
	printf("New cylinder  **********\n");	
    do{ radius=checknumber(); height=checknumber1();} while((radius<0||height<0)&&(height!=0&&radius!=0));
	}printf("Goodbye!\n");
	system("PAUSE");
	return 0;
}
