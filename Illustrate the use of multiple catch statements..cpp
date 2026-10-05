#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter choice: ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 10.5;
        else
            throw 'A';
    }
    catch (int x)
    {
        cout << "Integer exception: " << x << endl;
    }
    catch (double x)
    {
        cout << "Double exception: " << x << endl;
    }
    catch (char x)
    {
        cout << "Character exception: " << x << endl;
    }

    return 0;
}
