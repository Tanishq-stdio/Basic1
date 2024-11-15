#include<iostream>
using namespace std ;

class Base 
{
    public :
    int i , j ;
    virtual void fun()                  //1000       
    {
        cout<<"inside the base fun\n";  
    }
    void gun()                          //2000
    {
        cout<<"inside base gun \n";   
    }
    virtual void sun()                  //3000
    {
        cout<<"inside base sun \n";
    }
    virtual void run()                  //4000
    {
        cout<<"inside base run \n";
    }
};

class derived : public Base
{
    public:
    int x , y ;
       virtual void fun()              //5000        
       {
          cout<<"Inside the derived fun\n";
       }
        void gun()                     //6000  
       {
          cout<<"Inside the derived gun\n";
       }
       virtual void mun()              //7000    
       {
          cout<<"Inside the derived mun\n";
       }
       void run()                      //8000
       {
          cout<<"inside derived run \n";
       }
};

int main()
{
   
    cout<<"size of base class :"<<sizeof(Base)<<"\n";        //8
    cout<<"size of derived class :"<<sizeof(derived)<<"\n";  //16

    derived dobj;
    Base *bptr = NULL;

    bptr = &dobj;      // Upcasting 


    bptr->fun();    // Der fun
    bptr->gun();    // Base gun
    bptr->sun();    // Base sun
    bptr->run();    // Der run

    return 0;
}