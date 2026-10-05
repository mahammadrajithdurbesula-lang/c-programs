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

    
    friend void operator++(Number &n);
    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << "Value = " << x << endl;
    }
};


void operator++(Number &n)
{
    ++n.x;
}

Number operator+(Number n1, Number n2)
{
    Number temp;
    temp.x = n1.x + n2.x;
    return temp;
}

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
