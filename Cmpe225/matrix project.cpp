#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;
int x=1;
template <typename B>
class matrix// this my matrix object
{
private:
    B Arr[4][4];// array
public:
    matrix()
    {
        cout << "Matrix has been created"<<endl;// consrtructer
    }
    friend matrix operator+(matrix &m1,matrix &m2)//operator overloading for + operation
    {
        matrix <B> addition;

        for (int row = 0; row < 4; row++)
        {
            for (int collum = 0; collum < 4; collum++)
            {
                addition.Arr[row][collum] = m1.Arr[row][collum] + m2.Arr[row][collum];//making addition
            }
        }
        return addition;
    }
   friend matrix operator-(matrix &m1,matrix &m2)//operator overloading for - operation
    {
        matrix <B> subtraction;

        for (int row = 0; row < 4; row++)
        {
            for (int collum = 0; collum < 4; collum++)
            {
                subtraction.Arr[row][collum] = m1.Arr[row][collum] - m2.Arr[row][collum];//making subtraction
            }
        }
        return subtraction;
    }
    friend ostream& operator<<(ostream &myout, matrix &a)//output overloading and making output in this function
    {
    for(int a=0;a<11;a++)
        {
            cout<<"_";
        }
    cout<<endl;
    for (int row = 0; row < 4; row++)
    {  cout<<"| ";
        for (int collum = 0; collum < 4; collum++)
        {
            myout << a.Arr[row][collum] << " ";
        }
        cout<<"| ";
        cout << endl;
    }
    return myout;
    }
    friend istream& operator>>(istream &myin, matrix &a)//input overloading and making input int this function
    {
        B Input;
        
        for (int row = 0; row < 4; row++)
        {
            for (int collum = 0; collum < 4; collum++)
            {
                cout<<"Please enter values for("<<row<<"-"<<collum<<") step of"<<x<<". matrix"<<endl;
                myin >> Input;
                    a.Arr[row][collum] = Input;
                if(Input<0||Input>25)//controlling for range
                {	srand(time(0));
                    cout << "value written out of range"<<endl;
                    cout <<"assigned a random value"<<endl;
                    a.Arr[row][collum]=(rand()%25);
                }
            }
        }
        return myin;
    }
        ~matrix()
    {
        cout << "Matrix has been destroyed"<<endl;
    }
    friend void chechkquattromatrix(matrix &a) // checking for quattro matrix
    {
        if(a.Arr[0][0] == (a.Arr[0][1] + a.Arr[1][0] + a.Arr[1][1]) && a.Arr[0][3]==(a.Arr[0][2] + a.Arr[1][2] + a.Arr[1][3]) && a.Arr[3][0]==(a.Arr[2][0] + a.Arr[2][1] + a.Arr[3][1]) && a.Arr[3][3]==(a.Arr[3][2] + a.Arr[2][2] + a.Arr[2][3])){
            cout<<"It is quattromatrix"<<endl;
        }
        else{
            cout<<"it is not quattromatrix"<<endl;
        }
    }
};
int main()
{
int flag=0;
char operation;
 matrix<double> M;//normal matrix
 matrix<double> M1;//first matrix
 matrix<double> M2;//second matrix
 cin>>M1;
 x++;
 cin>>M2;
while(flag==0)
{
 cout<<"which operation to be handled. + for summation - for subtraction"<<endl;
 cin>>operation;
  if(operation=='+'){
  	flag=1;
  }
  else  if(operation=='-'){
  	flag=1;
  }
  else
  {
	cout<<"Incorrect operation is entered please enter again"<<endl;
  flag=0;	
  }
}
 if(operation=='+')
 M=M1+M2;
 if(operation=='-')
 M=M1-M2;
 cout<<M<<endl;
chechkquattromatrix(M);
system("pause");
 return 0;
}

