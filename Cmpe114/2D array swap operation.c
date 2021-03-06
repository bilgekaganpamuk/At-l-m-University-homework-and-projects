#include<stdio.h>

int main(){
int n,i,j;
printf("Enter the size of the array:");
scanf("%d",&n);
int arry[n][n],arry1[n][n];
printf("Enter %d integers",n*n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arry[i][j]);
    }
}
for(i=0;i<n;i++){
arry1[i][i]=arry[i][n-1-i];
arry[i][n-1-i]=arry[i][i];
arry[i][i]=arry1[i][i];
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",arry[i][j]);
    }
    printf("\n");
}
return 0;
}
