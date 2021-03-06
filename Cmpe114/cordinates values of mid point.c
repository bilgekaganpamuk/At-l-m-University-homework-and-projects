#include<stdio.h>
struct point{
    double x,y;
};
struct point func2(struct point pnt1,struct point pnt2){
    struct point mid;
    mid.x=(pnt1.x+pnt2.x)/2;
    mid.y=(pnt1.y+pnt2.y)/2;
    return mid;
}
struct point func(){
    struct point p;
    printf("Enter the cordinates:");
    scanf("%lf %lf",&p.x,&p.y);
    return p;
    }
int main(){
    struct point pnt1,pnt2,mid;
    pnt1=func();
    pnt2=func();
    mid=func2(pnt1,pnt2);
    printf("The mid point is %.2lf,%.2lf",mid.x,mid.y);
    return 0;
}


