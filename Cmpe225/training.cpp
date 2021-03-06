#include <iostream>

using namespace std;
class myN {
private:
	int N;	
public:
	// Default Constructor
	myN();
	// Constructor with a paramater
	myN(int n);
		
	~myN();
	// Member function
	int getN();
	void setN(int y);
		myN::myN(){
		cout << "Default Constructor\n";
		N=0;
	}
		
	myN::myN(int n){
		cout << "Overloaded Constructor\n";
		N=n;
	}
	myN::~myN(){
		cout << "Destructor...\n";
	}
	// Member function
	int myN::getN(){
		return N;
	}
	void myN::setN(int y){
		N=y;
	}


};

// Pass the object by-value. Object is copied.
void test(myN u){
	u.setN(10);
} // u is destroyed here. It is a local variable created. The change stays here
// Pass the object as a reference
void testRef(myN &u){
	u.setN(10);
}
// Pass the object as a pointer
void testPnt(myN *u){
	u->setN(10); // We are not modifying u itself, but the memory location pointed by u.
}
// Pass the object as a pointer, but modify u itself
void testPntMod(myN *u){
	u = new myN(); // This is a local copy. Any change to u itself is local. 
	// Also it is not destroyed. MEMORY LEAK
	u->setN(10);
}

int main ()  {
	myN m(6);
	cout << "before:" << m.getN() << endl;
	test(m);// the object is NOT modified in the function
	cout << "after:" << m.getN() << endl;
	cout << "before:" << m.getN() << endl;
	testRef(m);// the object is modified in the function
	cout << "after:" << m.getN() << endl;
	m.setN(45);
	cout << "before:" << m.getN() << endl;
	testPnt(&m);// the object is modified in the function
	cout << "after:" << m.getN() << endl;
	myN *p = new myN(4); // p is created. Overloaded constructor
	cout << "before:" << p->getN() << endl;
	testPnt(p); // the object is modified in the function
	cout << "after:" << p->getN() << endl;
	delete p; // p is destroyed here
	m.setN(45);
	cout << "before:" << m.getN() << endl;
	testPntMod(&m);// the object is NOT modified in the function
	cout << "after:" << m.getN() << endl;
	// m is destroyed here
}

