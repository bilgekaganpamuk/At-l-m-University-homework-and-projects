#include "linkedlist.h"
#include <iostream>
#include <cassert>
//Bilge Kaðan Pamuk

using namespace std;


int posi=0;// global variable for search function
template <typename B>
class  ConvertableLinkedList{
private:

LinkedList<LinkedList<B> > list;

LLNode<LinkedList<B> > *current=NULL;

void convertToCircular()
{
   LLNode<LinkedList<B> > *head = list.getHead();
   LLNode<LinkedList<B> > *tail = list.getTail();
   tail->next=head;
}
void convertToSingly()
{
    LLNode<LinkedList<B> > *head = list.getHead();
    LLNode<LinkedList<B> > *tail = list.getTail();
    tail->next=NULL;
}
public:

void insertToLast(const B& val)
{
    LinkedList<B> newlist;// my new linkedlist
    newlist.insertLast(val);
    list.insertLast(newlist);
}
void insertAtIndex(const B& val, int pos)
{
LLNode<LinkedList<B> > *lister = list.getHead();
int lenght=list.length();
if(pos>lenght-1)
{
    pos=lenght-1 ;
}
for(int x=0;x<pos;x++)
{
    lister=lister->next;
}
LinkedList<B> dum=lister->data;
dum.insertLast(val);
lister->data=dum;
}
int findNext(const B& val)
{
    convertToCircular();
    int counter=0;
    LLNode<LinkedList<B> > *Dummy;
if(current==NULL)
    {
     Dummy=list.getHead();
    }
else
    {
    Dummy = current->next;
    posi++;
    }
while(counter<list.length())
        {
            if(Dummy->data.search(val)!=NULL)
            {
                if(Dummy->data.search(val)->data==val)
                {
                    current=Dummy;
                    convertToSingly();
                    return posi%list.length();
                }
            }
            else
            {
                Dummy=Dummy->next;
                posi++;// i updated my global variable position in here
            }
        counter++;
        }
    if(current!=NULL)
        {
        posi--;
        }
    convertToSingly();
    return -1;	
}
void display()
{
LLNode<LinkedList<B> > *dummy=list.getHead();
	while(dummy != NULL)
    {
		cout << dummy->data << " ";
		dummy = dummy->next;
		cout<<endl;
	}
}
};


int main()
{
ConvertableLinkedList<int> bilge;
int val=0;
cout<<endl<<"Case 1-Insert value to last"<<endl<<"Case 2-Insert value to the Index"<<endl<<"Case 3-Find the value"<<endl<<"Case 4-Display"
<<endl<<"Case 5-Quit"<<endl;
do{
cout<<endl<<"Select a case:";
cin>>val;
if(val==1)
    {
    int value;
    cout<<"Enter the value"<<endl;
    cin>>value;
    bilge.insertToLast(value);
    }
if(val==2)
    {
    int value;
    int pos;
    cout<<"Enter the value"<<endl;
    cin>>value;
    cout<<"Enter the index"<<endl;
    cin>>pos;
    bilge.insertAtIndex(value,pos);
    }
if(val==3)
    {
    int value;
    int pos;
    int x;
    cout<<"Enter the value you want to search:"<<endl;
    cin>>value;
    x = bilge.findNext(value);
    if(x!=-1)
        {
            cout<<"value found in index: "<<x<<endl;
        }
    else
        {
            cout<<"The value is not found"<<endl;
        }
    }
if(val==4)
    {
    cout<<"List Printed!!!!!!"<<endl;
    bilge.display();
    }
}while(val!=5);
cout<<"Good Bye!"<<endl;

return 0;
}


