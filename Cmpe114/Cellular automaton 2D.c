#include<stdio.h>
#include<stdlib.h>

#define null_char '_'
#define full_char '#'
void print_state(int state_to_print[], int state_length);
void initialize_array(int array_to_initialize[], int state_length);
void swap_arrays(int current_state[], int next_state[], int array_length);
void calculate_next_state(int first[], int swap[], int rule_lookup[8]);
const int MAX_STATE_COUNT = 8;
const int GENERATION_COUNT = 50;//I taked generation count as a constant
const int ARRAY_LENGTH = 100;// I taked array length as a constant
int main()
{int Rule,i,k,c,a;
do{// ý used loop for asking again
int swap[100];// I declered another function for swap
int base[8]={{000},{001},{10},{11},{100},{101},{110},{111}};// this is my array for showing conditions
int rule_lookup[8];//(000,001,010,011,100,101,110,111) this is my array for initializing RULE
int first[ARRAY_LENGTH];
printf("Please enter the rule number(Between 0 and 255)\n");// I taked rule
scanf("%d",&Rule);
for(i=0;i<8;i++)// Rule initializion
    {
        k=Rule%2;
        Rule=Rule/2;
        rule_lookup[i]=k;

    }
printf("Current State    Next State\n");
printf("----------------------------\n");
    for(i=0;i<8;i++){
        printf("%d\t\t%d\n",base[i],rule_lookup[i]);// ý Printed Rule in there
    }
initialize_array(first,ARRAY_LENGTH);
print_state(first,ARRAY_LENGTH);// for constant part
for(c=0;c<GENERATION_COUNT;c++)// In This loop ý calculated array ,swapped array and printed array.
{
calculate_next_state(first,swap,rule_lookup);
swap_arrays(first,swap,ARRAY_LENGTH);
print_state(first,ARRAY_LENGTH);

}
printf("\n\nIf you want to exit Enter 0 If you want to continue Enter a number diffrent from 0:\n");//This is my condition for continue or stop
scanf("%d",&a);
}while(a!=0);
system("PAUSE");
return 0;
}
void print_state(int state_to_print[], int state_length)// this is my fonction for printing
{int i;
   for(i=0;i<state_length;i++){
        if(state_to_print[i]==1)
            {
                printf("# ");
            }
        if(state_to_print[i]==0)
            {
                printf("_ ");
            }
        }
    printf("\n");
}
void swap_arrays(int current_state[], int next_state[], int array_length){// this is for swap function
    int i;
for(i=1;i<array_length;i++)
{
current_state[i]=next_state[i];
}

}
void calculate_next_state(int first[], int swap[], int rule_lookup[8]){// in this function I calculated next stage
    int k;
    for(k=0;k<ARRAY_LENGTH;k++)// In this loop I searched for first 3 member of constant line and calculated according to our rule
    {
    if(first[k]==0 && first[k+1]==0 && first[k+2]==0)
    {
        swap[k+1]=rule_lookup[0];
    }
    else if(first[k]==0 && first[k+1]==0 && first[k+2]==1)
    {
        swap[k+1]=rule_lookup[1];
    }
    else if(first[k]==0 && first[k+1]==1 && first[k+2]==0)
    {
        swap[k+1]=rule_lookup[2];
    }
    else if(first[k]==0 && first[k+1]==1 && first[k+2]==1)
    {
        swap[k+1]=rule_lookup[3];
    }
    else if(first[k]==1 && first[k+1]==0 && first[k+2]==0)
    {
        swap[k+1]=rule_lookup[4];
    }
    else if(first[k]==1 && first[k+1]==0 && first[k+2]==1)
    {
        swap[k+1]=rule_lookup[5];
    }
    else if(first[k]==1 && first[k+1]==1 && first[k+2]==0)
    {
        swap[k+1]=rule_lookup[6];
    }
    else if(first[k]==1 && first[k+1]==1 && first[k+2]==1)
    {
        swap[k+1]=rule_lookup[7];
    }
}
}
void initialize_array(int array_to_initialize[], int state_length){// in this stage i initialize first stage of array
int i;
    for(i=0;i<state_length;i++)
        {
        if(i==state_length/2-1)
        {
            array_to_initialize[i]=1;
        }
        else
        {
            array_to_initialize[i]=0;
        }
    }
}





