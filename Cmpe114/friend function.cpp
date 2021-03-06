#include <iostream>
using namespace std;
int s=5;
class A{
    private:
	int b,c;
    public:
         A(int x=0, int y=0):b(x),c(y){}
          void fun(int&, int);
          void fun(int &);
          void output()
          {
            cout<<"b="<<b<<" c="<<c<<endl;
          }
          friend A add(A,A);
          friend A sub(A,A);
   };
A add(A obj1,A obj2)
{
  A obj3;
  obj3.b=obj1.b+obj2.b;
  obj3.c=obj1.c+obj2.c;
  return obj3;
}
A sub(A obj1, A obj2)
{
  A obj3;
  obj3.b=obj1.b-obj2.b;
  obj3.c=obj1.c-obj2.c;
  return obj3;
}
/*void A::fun(int &x, int y)
{  s=b+2;
   x=c+1;
   y=b*2;
   c++;
}

void A::fun( int &y)
{  int s=b;
   ::s++;
   c=::s ;
   y=s;
}
*/
int main()
{
  A obj1(3,4),obj2(3,4);
  A obj=add(obj1,obj2);
  obj.output();
}

