#include<iostream>
using namespace std;
struct Node{
int info;
Node *link;
};
Node* createForward(){
Node *head, *last, *current;
int num;
cout<<"Enter integers into a list ending with -99"<<endl;
cin>>num;
head=NULL;
while(num!=-99){
current = new Node;
current->info=num;
current->link=NULL;
if(head==NULL){//empty list?
head=current;
last=current;}
else{
last->link=current;
last=current;}
cin>>num;
}//end while
return head;
}
int main(){
Node *h,*t;
h=createForward();
t=h;
cout<<"List"<<endl;
while(t!=NULL){
cout<<t->info<<" ";
t=t->link;
}
return 0;
}
