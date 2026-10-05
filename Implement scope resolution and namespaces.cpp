#include <iostream>
using namespace std;

namespace First
{
    int value = 10;
}

namespace Second
{
    int value = 20;
}

int value = 30;

int main()
{
    cout << "First namespace value: " << First::value << endl;
    cout << "Second namespace value: " << Second::value << endl;

    cout << "Global value: " << ::value << endl;

    return 0;
}
