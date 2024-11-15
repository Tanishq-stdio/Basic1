#include<iostream>
using namespace std;

class Base1
{
    public:
       int i,j;
       Base1()
       {
          cout<<"inside Base1 constructor \n";
          i = 10;
          j = 20;
       }
       ~Base1()
       {
          cout<<"inside Base1 destructor \n";
       }
       void fun()
       {
          cout<<"inside fun of Base1 \n";
       }
};
class Base2
{
    public:
       int i,j;
       Base1()
       {
          cout<<"inside Base1 constructor \n";
          x = 30;
          y = 40;
       }
       ~Base1()
       {
          cout<<"inside Base1 destructor \n";
       }
       void gun()
       {
          cout<<"inside fun of Base2 \n";
       }
};
class Derived : public Base1, public Base2
{
    public:
       int a,b
       Derived()
       {
          cout<<"inside derived constructor \n";
          a = 50;
          b = 60;
       }
       ~Derived()
       {
          cout<<"inside derived destructor \n";
       }
       void sun()
       {
          cout<<"inside derived sun \n";
       }
};

int main()
{


    return 0;
}