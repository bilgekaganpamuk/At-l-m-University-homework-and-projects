#include<iostream>
#include<string>
#include<string.h>

//HomeWork 2 cmpe225
using namespace std;
class HealthCenterInfo
{
protected:
    string name;
    string surname;
    string Fullname;
    string city;
    int age;
    int starvationRate=100;
public:
    void setstarvationrate(int rate)
	{
	starvationRate=rate;		
	}
	int getstarvationrate()
    {
        return starvationRate;
    }
    string getName()
    {
        return name;
    }
    string getSurname()
    {
        return surname;
    }
    string getFullName()
    {
		Fullname=name+ surname;
        return Fullname;
    }
    string getCity()
    {
        return city;
    }
    bool checkStarvation()
    {
        if(starvationRate<20)
            {
                return true;
            }
        else
            {
                return false;
            }
    }
    ~HealthCenterInfo()
    {
        cout<<name<<" "<<surname<<" quit the health center."<<endl;
    }
    
};
class patient:public HealthCenterInfo
{
protected:
string diseaseName;
public:
	 void setDiseaseName();
	 
    patient(string Name, string Surname,int Age,string disas)//taking parametres in this line for patient
    {
        name=Name;
        surname=Surname;
        age=Age;
        diseaseName=disas;
    }
    bool checkStarvation()
    	{
        if(getstarvationrate()<50)
            {
                return true;
            }
        else
            {
                return false;
            }
    	}
    void takeACare()
    {
        setstarvationrate(getstarvationrate()-15);
        if(checkStarvation()==true)
            {
                cout<<"Patient:"<<Fullname<<" is hungary!!!"<<endl;
            }
    }
    ~patient()
    {
        cout<<name<<" "<<surname<<" was discharged!."<<endl;
    }
};
class Employee:public HealthCenterInfo
{
protected:
	int employeeID;
public:
	int getEmployee()
    {
        return employeeID;
    }
    bool checkStarvation()
    {
        
        if(getstarvationrate()<20)
            {
                return true;
            }
        else
            {
                return false;
            }
        
    }
    void checkPatient(patient &x)
    {
        x.setstarvationrate(x.getstarvationrate()-5);
        cout<<"The patient named "<<x.getFullName()<< " is checking"<<endl;
        if(x.checkStarvation()==true)
            {
                cout<<x.getFullName()<< "is starving"<<endl;
            }
    }
    ~Employee()
    {
        cout<<name<<" "<<surname<<" quits the job in the health center"<<endl;
    }
};
class doctor:public Employee
{
public:
    doctor(string Name, string Surname,int Age,int employed)//taking parametres for doctor
    {
        name=Name;
        surname=Surname;
        age=Age;
        employeeID=employed;
    }
        void checkPatient(patient &x)
    {
        setstarvationrate(getstarvationrate()-5);
        cout<<"The patient named "<<x.getFullName()<< " is checking"<<endl;
        x.takeACare();
		cout<<Fullname<< " gives medicine to patient"<<endl;
    	if(checkStarvation()==true)
		 {
		 	cout<<getFullName()<< " is starving"<<endl;
		 } 
	}
        ~doctor()
        {
            cout<<name<<" is quit being a doctor in this center"<<endl;
        }
};
class nurse:public Employee
{	
public:
        nurse(string Name, string Surname,int Age,int employed)//taking parametres for nurse 
    {
        name=Name;
        surname=Surname;
        age=Age;
        employeeID=employed;
    }
    void checkPatient(patient &x)
        {
        setstarvationrate(getstarvationrate()-10);
        cout<<"The patient named "<<x.getFullName()<< " is checking"<<endl;
         x.takeACare();
		 cout<<name<<" "<<surname<<" took care of the patient."<<endl;
         if(checkStarvation()==true)
		 {
		 	cout<<getFullName()<< " is starving"<<endl;
		 }
        
		}

};
int main()
{
    doctor doctor1("David ","Tennant",49,181971);
    nurse nurse1("Jodie ","Whittaker",38,171982);
    patient patient1("Matt ","Smith",37,"xyzxyz");
    cout<<"All people in this health center:"<<endl;
    cout<<doctor1.getFullName()<<endl;
    cout<<nurse1.getFullName()<<endl;
    cout<<patient1.getFullName()<<endl;
    cout<<endl;
	cout<<"All employees works:"<<endl;
	cout<<endl;
   for(int k=0;k<5;k++){
   	cout<<endl;
    cout<<nurse1.getFullName()<<endl;
	nurse1.checkPatient(patient1);
    cout<<endl;
    cout<<doctor1.getFullName()<<endl;
	doctor1.checkPatient(patient1);
	cout<<endl;
}	  
return 0;
}
