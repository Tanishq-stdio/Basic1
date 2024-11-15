#include<iostrem>

using namespace std;

class Base
{
    public:
      int i;
    private:
      int j;
    protected:
      int k;
    public:
      Base()
      {
        i = 10;
        j = 20;
        k = 30;
      }
      void gun()
      {
        cout<<i<<"\n";   //allowed
        cout<<j<<"\n";   //allowed
        cout<<k<<"\n";   //allowed
      }
};

class derived : public Base
{
    public:
       void fun()
       {
         cout<<i<<"\n";   //allowed
         cout<<j<<"\n";   //not allowed
         cout<<k<<"\n";   //allowed
       }
}

int main()
{
    Base dobj;

    cout<<dobj.i<<"\n";   //allowed
    cout<<dobj.j<<"\n";   //not allowed
    cout<<dobj.k<<"\n";   //allowed

    return 0;
}