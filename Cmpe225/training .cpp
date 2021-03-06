#include<iostream>
using namespace std;

class myN {
private:
	int N;

public:		
	myN(int a=4){
		N=a;
	}
	// local variable N has the same name as member variable
	myN *setN(int N){
		// N = N ;  This assignment wont work!!!
		// Since this pointer can access to membrr variables/methods 
		// only, we can use it to access
		// to member variables to solve naming problem
		// this->N is the member variable
		// N is the local variable
		this->N = N;	
		// the return type of the method is (myN *). The type of this is also (myN *).
		return this;
	}
	// Print this variable to see the address of the object and compare it 
	// in the main program
	void printThis(){
		cout << "this:" << this << endl;
	}
	int getN(){
		return N;
	}
};int main(){

	myN n;

	// a pointer variable
	myN *p;

	// p is pointing to the address of n 
	p = n.setN(34);

	cout << p->getN() << endl; // 34
	// Modify the variable n using p
	p->setN(3);
	cout << n.getN() << endl; // 3

	// Now print the address of the variable.
	cout << "address = " << &n << endl;
	// use the object to print itself. Thew output should be the same 
	// address
	n.printThis();


	return 0;
}

