#include<stdio.h>
void circ(int x,float *area,float *circum);


int main(){
    int a;
    float area,circum;
printf("Enter radius:\n");
scanf("%d",&a);
circ(a,&area,&circum);
printf("area=%.3f circum=%.3f",area,circum);
return 0;
}
void circ(int x,float *area,float *circum){
*area=3.14*x*x;
*circum=2*3.14*x;
}
