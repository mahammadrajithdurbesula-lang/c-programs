#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Maximum of integers: " << maximum(10, 20) << endl;
    cout << "Maximum of floats: " << maximum(5.5, 3.2) << endl;

    return 0;
}
