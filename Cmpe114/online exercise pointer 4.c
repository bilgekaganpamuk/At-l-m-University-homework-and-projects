#include<stdio.h>
#include<math.h>
void calculateslope(){
float x,y,z;
float answer;
printf("Enter the value of a\nEnter the value of b\nEnter the value of c\n");
scanf("%f%f%f",&x,&y,&z);
answer=(x/y);
printf("%.1fx+%.1fy+%.1f=0 is %f\n",x,y,z,answer);
}
void calculateequ(float *height,float *area,float *Perimeter){
float x;
printf("Enter side value\n");
scanf("%f",&x);
*height=sqrt(3)/2*x;
*area=sqrt(3)/4*x*x;
*Perimeter=3*x;
}
void calculatetime(int *hours,int *minutes,int *seconds){
int x;
printf("Enter time in seconds\n");
scanf("%d",&x);
*hours=x/3600;
*minutes=(x%3600)/60;
*seconds=x%60;
}

int main(){
    int a,b;
    float height,area,perimeter;
do{
    printf("-----menu-----\n1.Mathematics\n2.life\n3.quit\n");
    scanf("%d",&a);
        if(a==1){
        printf("For slope enter 1\nFor equilateral enter2\n");
        scanf("%d",&b);
        if(b==1){
        calculateslope();
        }
        if(b==2){
        calculateequ(&height,&area,&perimeter);
        printf("Height=%.1f area=%.1f perimeter=%.1f\n",height,area,perimeter);
        }
        }
        if(a==2){
        float o,p;
        printf("1.time conversion\n2.temperature conversion\nEnter your choise\n");
        scanf("%f",&o);
        if(o==1){
                int hours,minutes,seconds;
            calculatetime(&hours,&minutes,&seconds);
            printf("%d hour %d minute %d second\n",hours,minutes,seconds);
        }
        if(o==2){

        }
        }
}while(a!=3);
printf("GOOD BYE!!!!!!!!");
return 0;
}
