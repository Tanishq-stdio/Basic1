#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"inside base constructor \n";
            i = 10;
            j = 20;
        }
        ~Base()
        {
            cout<<"inside base destructor \n";
        }
        void fun()
        {
            cout<<"inside base fun \n";
        }

};
 class Derived : public Base
 {
    public:
        int x,y;

        Derived()
        {
            cout<<"inside base constructor \n";
            x = 30;
            y = 40;
        }
        ~Derived()
        {
            cout<<"inside base destructor \n";
        }
        void gun()
        {
            cout<<"inside derived gun \n";
        }
 };

 class DerivedX : public Derived
 {
    public:
       int a,b;
       DerivedX()
       {
          cout<<"inside DerivedX constructor \n";
          a = 50;
          b = 60;
       }
       ~DerivedX()
       {
          cout<<"inside DerivedX destructor \n";
       }
       void Sun()
       {
         cout<<"inside DerivedX destructor \n";
       }

 };

 int main()
 {
    DerivedX dobj;
    //COnstructor : Base -> Derived -> DerivedX

    cout<<"inside main function \n";

    cout<<"Size of base class"<<sizeof(Base)<<"\n";         //8
    cout<<"Size of Derived class"<<sizeof(Derived)<<"\n";   //16
    cout<<"Size of DerivedX class"<<sizeof(DerivedX)<<"\n"; //24

    cout<<dobj.i<<"\n";  //10
    cout<<dobj.j<<"\n";  //20
    cout<<dobj.x<<"\n";  //30
    cout<<dobj.y<<"\n";  //40
    cout<<dobj.a<<"\n";  //50
    cout<<dobj.b<<"\n";  //60

    dobj.fun();   //inside fun of base
    dobj.gun();   //inside gun of derived
    dobj.sun();   //inside sun of DerivedX

    //Destructor : DerivedX -> Derived -> Base
    return 0;
 }
 