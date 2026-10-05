#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Square of 5: " << square(5) << endl;

    cout << "Sum of 10 and 20: " << add(10, 20) << endl;
    cout << "Sum of 10, 20 and 30: " << add(10, 20, 30) << endl;

    return 0;
}
