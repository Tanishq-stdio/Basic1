#include<iostream>
using namespace std;

class Demo
{
    public: 
       int Addition(int A,int B)          //Addition@2ii
       {
           return A+B;
       }
       double Addition(int A,int B)       //Addition@2dd
       {
           return A+B;
       }
       int Addition(int A,int B, int C)   //Addition@2
       {
           return A+B+C;
       }
};

int main()
{
    Demo obj;

    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.90,11.99)<<"\n";
    cout<<obj.Addition(10,11,20)<<"\n";

    return 0;
}


/*

     void Fun(int A,int B);
     void Fun(int A, int B, int C);

     void Fun (int A, int B);
     void Fun (int A, Float B);

     void Fun (int A, float B, double C);
     void Fun (double A, float B, int C);

     void Fun (int A, int B);
     int Fun (int A, int B)



*/