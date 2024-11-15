#include<iostream>

using namespace std;

class Arthimatic
{
    public:
       int No1;
       int No2;

       Arithematic(int A, int B)
       {
          No1 = A;
          No2 = B;
       }

       int Addition()
       {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
       }

       int Subtraction()
       {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
       }

};

int main() 
 {
    int Value1 = 0, Value2 = 0, Ret = 0;

    cout<<"enter first number \n";
    cin>>Value1;

    cout<<"enter second number \n";
    cin>>Value2;

    Arthimatic obj(Value1,Value2);

    ret = obj.Addition();
    cout<<"Addition is :"<<Ret<<" \n";

    ret = obj.Subtraction();
    cout<<"Subtraction is :"<<Ret<<" \n";


    return 0;
}