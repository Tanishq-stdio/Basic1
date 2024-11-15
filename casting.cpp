#include<iostream>
using namespace std ;

class Base 
{
    public :
    int i , j ;
    void fun()                       //defination 
    {
        cout<<"inside the base fun\n";
    }
};

class derived : public Base
{
    public:
    int x , y ;
       void fun()                    //redefination
       {
          cout<<"Inside the derived fun\n";
       }
};

int main()
{

    Base bobj;
    derived dobj;

    Base *bptr = NULL;
    derived *dptr = NULL ;

 return 0;
}