#include<stdio.h>
void Compute(int x,int y,int z,float *sum,float *average);

int main(){
    int a,b,c;
    float average,sum;
printf("enter 3 real numbers:\n");
scanf("%d%d%d",&a,&b,&c);
Compute(a,b,c,&sum,&average);
printf("average=%.3f  sum=%.3f",average,sum);
return 0;

}void Compute(int x,int y,int z,float *sum,float *average){
*sum=x+y+z;
*average=(x+y+z)/3;
}
