#include<iostream>
using namespace std ;

class Base 
{
    public :
    int i , j ;
    void fun()                       
    {
        cout<<"inside the base fun\n";
    }
    void gun()
    {
        cout<<"inside base gun \n";
    }
    void sun()
    {
        cout<<"inside base sun \n";
    }
    void run()
    {
        cout<<"inside base run \n";
    }
};

class derived : public Base
{
    public:
    int x , y ;
       void fun()                    
       {
          cout<<"Inside the derived fun\n";
       }
        void gun()                    
       {
          cout<<"Inside the derived gun\n";
       }
       void sun()                    
       {
          cout<<"Inside the derived sun\n";
       }
       void mun()                    
       {
          cout<<"Inside the derived mun\n";
       }
};

int main()
{
    derived dobj;
    Base *bptr = NULL;

    bptr = &dobj;      // Upcasting 


    bptr->fun();  
    bptr->gun();
    bptr->sun();
    bptr->run();
    bptr->mun();

    return 0;
}