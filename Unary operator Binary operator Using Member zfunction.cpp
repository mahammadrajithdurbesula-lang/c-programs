#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a = 0)
    {
        x = a;
    }

   
    void operator++()
    {
        ++x;
    }

 
    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3;

    cout << "Before Unary Operator: ";
    n1.display();

    ++n1;

    cout << "After Unary Operator: ";
    n1.display();

    n3 = n1 + n2;

    cout << "After Binary Operator: ";
    n3.display();

    return 0;
}
