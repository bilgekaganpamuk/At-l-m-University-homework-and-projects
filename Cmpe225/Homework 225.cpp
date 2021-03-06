#include<iostream>
#include<string>
using namespace std;

class Hours//this a class for holding hours and minutes and we are overloading in and out operators
{
public:
    int hours;
    int minutes;
    friend istream& operator>>(istream &myin, Hours &A);//overloading in operator
    friend ostream& operator<<(ostream &myout, Hours &A);// overloading out operator
};
class Member//this is a class for calculating total minutes.
{
protected:
    string id;
    string member_name;
    Hours total;
    int total_minutes;
public:
    Member()
    {
    	id="";
    	member_name="";
    	total.hours=0;
    	total.minutes=0;
        total_minutes=0;
    }
    int calcMin(Hours &in, Hours &out);// calculating total minute function
};
class player: public Member// we are doing inheritance in there and this class construct id member name and its specialty and we are printing.
{
protected:
    string specialty;
public:
    player(string ID, string name,string special)//constructor
    {
        id=ID; member_name=name; specialty=special;
    }
    void print()// printing member function
    {
        cout<<"Id of the member is: "<<id<<endl<<"Name of the member is: "<<member_name<<endl<<"specialty of the member is: "<<specialty<<endl;
    }

};
istream& operator>>(istream &myin,Hours &A)//body of in operator overloading
{
    myin>>A.hours>>A.minutes;
    return myin;
}
ostream& operator<<(ostream &myout,Hours &A)//body of out operator overloading
{
    myout<<A.hours<<":"<<A.minutes;
    return myout;
}

int Member::calcMin(Hours &in, Hours &out)// body of calculate minutes function
{
    total.hours=out.hours-in.hours;
    total.minutes=out.minutes-in.minutes;
    if(total.hours==1&&total.minutes<0)
        {
            total_minutes=(out.minutes+60)-in.minutes;
            return total_minutes;
        }
    else if(total.hours>=0)
        {
            total_minutes=total.hours*60+total.minutes;
            return total_minutes;
        }
    else
        {
            cout<<"Please Enter The Time Properly!!!"<<endl;
            return 0;
        }
}
int main()// main function
{
    player obj1("18244710016","Bilge Kagan Pamuk","Archer");//object creation
    obj1.print();//printing object
    Hours in;//check in object
    Hours out;//check out object
    int a=1;
do{// doing do while because ý want to re initialize when user enter a number not in scope

    cout<<"Enter the check in time of the member"<<endl;
    cin>>in;//initializing check in
    cout<<"Enter the check out time of the member"<<endl;
    cin>>out;//initializing check out
    if(in.hours<=24&&out.hours<=24&&in.minutes<=60&&out.minutes<=60)// controlling for is hour bigger than 24 and minutes bigger than 60
	{
    if(obj1.calcMin(in,out)!=0)
	{//controlling for times are true
    cout<<"Check in and Check out times are "<<in<<" and "<<out<<endl;                              
    cout<<"The Total time member stays in the sports center is "<<obj1.calcMin(in,out)<<" minutes."<<endl;//printing total time spent
    a=1;
	}
	}
    else  
	{
		cout<<"Please enter time correctly"<<endl;
		a=0;
	}
}while(a==0);
	return 0;
}
