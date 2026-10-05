#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 10;
    }

    friend void display(Number n);
};

void display(Number n)
{
    cout << "Value of a: " << n.a;
}

int main()
{
    Number obj;
    display(obj);

    return 0;
}
