#include<stdio.h>
#include<string.h>// for strings
struct employes{// I defined structers of employes in there
int ID,NOP;
char surname[100];
char job[100];
};
int CodersInfo(struct employes p[]){ //Coders Ýnfo Fucntion
int i,counter=0;
FILE *FP;
FP=fopen("ödev_pamuk_bilgekagan.txt","w");
char str[100];
for(i=0;i<5;i++) // I Used loop for defining Fýle and finding File members
{

  if(strcmp(p[i].job,"Coder")==0)//I searched for Coders
    {
        if(p[i].NOP>10){
            counter=counter+1;
            fprintf(FP,"%s    %d    %s\n",p[i].surname,p[i].NOP,p[i].job);
        }
    }
}

return counter;
fclose(FP);// I closed FILE
}
void SortEmployees(struct employes p[],int n){// In this function I Sorted Employess number of projects.

int i,max=0,c,Max=1000;
int arr[100];
char str[100];
printf("Surname\t \t Number of Projects\n");
printf("----------------------------------------------------------------\n");
for(c=0;c<n;c++){
for(i=0;i<n;i++){
    if(p[i].NOP>max&&Max>p[i].NOP){ // I sorted in this double loop
        max=p[i].NOP;// Assign max
        arr[c]=p[i].NOP;
        strcpy(str,p[i].surname);
    }

}
printf("%s\t \t %d\n",str,arr[c]);
Max=arr[c];// Assign Condition
max=0;
}

}

int main(){
    int i,coders,n=5;
    struct employes p[5];
    printf("Enter ID,surname,number of projects and job of 5 employees:\n");
    for(i=0;i<5;i++){
    scanf("%d %s %d %s",&p[i].ID,&p[i].surname,&p[i].NOP,&p[i].job);// I taked employes info there.
    }
    coders=CodersInfo(p);// I call codersýnfo function
    printf("%d Coders info work more than 10 projects recorded into file!\n",coders);
    SortEmployees(p,n);// I call SOrtEmployees function
    return 0;

}
