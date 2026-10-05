#include <iostream>
using namespace std;

class Demo
{
public:
   
    Demo()
    {
        cout << "Constructor is called" << endl;
    }

    
    ~Demo()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Demo obj;

    cout << "Inside main function" << endl;

    return 0;
}
