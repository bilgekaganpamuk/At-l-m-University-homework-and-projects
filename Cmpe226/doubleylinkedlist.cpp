#include <iostream>

using namespace std;
template<typename T>
struct Node
{
	int info;
	Node *right;
	Node *left;
};

template <typename T>
class Create
{
protected:
	Node<T> *first,*last;
public:
	Create()
	{
		first=NULL;
		last=NULL;
	}
	template <typename S>
	friend ostream& operator << (ostream &myout,Create<S> main)
	{	Node<T> *curse=main.first;
		while(curse)
		{
		cout<<curse->info<<" ";
		curse=curse->right;
		}
		return myout;
	}
	void addfront(int num)
	{
		Node<T> *temp ;
		temp = new Node<T>;
		temp->info=num;
		temp->left=NULL;
		temp->right=first;
		
		if(first==NULL)
		{
			last=temp;
		}
		else
		{
			first->left=temp;
		}
		first=temp;
	}
	void addbefore(int num, Node<T> *x)
	{
		Node<T> *temp;
		temp=new Node<T>;
		temp->info=num;
		temp->right=x;
		temp->left=x->left;
		if(x->left==NULL)
		{
			first=temp;
		}
	}
	void addafter(int num, Node<T> *x)
	{
		Node<T> *temp;
		temp=new Node<T>;
		temp->info=num;
		temp->left=x;
		temp->right=x->right;
		x->right=temp;
		if(x->right==NULL)
		{
			last=temp;	
		}
	}
	void addend(int num)
	{
		Node<T> *temp;
		temp=new Node<T>;
		temp->info=num;
		temp->right=NULL;
		temp->left=last;
		
		if(last==NULL)
		{
			first=temp;
		}
		else
		{
			last->right=temp;
		}
		last=temp;
	}
	void deletenode(Node<T> *x)
	{
		if(x->left==NULL)
		{
		first=x->right;
		first->left=NULL;	
		}
		else if(x->right==NULL)
		{
			last=x->left;
			last->right=NULL;
		}
		delete(x);
	}
	void forward_traverse()
	{
	Node<T> *trav;
	trav = first;
	while(trav != NULL)
		{
		cout<<trav->info<<endl;
		trav = trav->right;
		}
	}
	void backward_traverse()
	{
	Node<T> *trav;
	trav = first;
	while(trav != NULL)
		{
		cout<<trav->info<<endl;
		trav = trav->left;
		}
	}

};

int main()
{
Create<int> B;
int num;
cout<<"Enter a number ending with -99"<<endl;
cin>>num;
while(num!=-99)
{
Node<int> *x1;
x1= new Node<int>;
B.addafter(num,x1);
cin>>num;
}
cout<<B;

return 0;
}
