#include<iostream>

using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
        void Display()
        {
            cout<<"Inside Display method";
        }
    };

}

int main()
{
    using namespace Marvellous;

    Demo obj;
    obj.Display();

    return 0;
}