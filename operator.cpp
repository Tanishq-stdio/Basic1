#include<iostream>

using namespace std;

class Demo
{
    public:
        int no1,no2;
        
        Demo(int A, int B)
        {
            no1 = A;
            no2 = B;
        }

};
Demo operator +(Demo op1, Demo op2)
{
    return Demo(op1.No1+op2.No1, op1.No2+op2.No2);
}
int main()
{
    int i = 10, j = 20;
    int Ans = 0;

    Ans = i + j;

    Demo obj1(10,20);
    Demo obj2(30,40);

    Demo obj3(0,0);
    obj3 = obj1 + obj2;      // +(obj1,obj2);

    cout<<obj3.No1<<"\t"<<obj3.No2<<"\n";

    return 0;
}