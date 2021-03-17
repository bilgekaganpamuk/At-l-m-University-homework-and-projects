#include<iostream>
using namespace std;

class DayOfYear{
	public:
		
		void input();
		void output(); //member function declaration
		
		int getmonth();
		int getday();
	
	private:
		
		int month;
		int day;
};
void DayOfYear::input(){
	
	cin>>month;
	cin>>day;
	//We do not need to specify object names
}
void DayOfYear::output(){
	
	cout<<"month = "<<month<<" day = "<<day<<endl;
}
int DayOfYear::getday(){
	
	return day;
	
}

int DayOfYear::getmonth(){
	
	return month;
}




main(){
	
	DayOfYear today,birthday;
	
	cout<<"Enter today's date: ";
	today.input();
	
	cout<<"Enter your birthday: ";
	birthday.input();
	
	cout<<"Today's date is: ";
	today.output();
	cout<<"Your birthday is:";
	birthday.output();
	
	if(today.getday() == birthday.getday() && birthday.getday() == birthday.getmonth())
		cout<<"HAPPY BIRTHDAY!";
	else
		cout<<"Happy unbirthday";
	return 0;
}
