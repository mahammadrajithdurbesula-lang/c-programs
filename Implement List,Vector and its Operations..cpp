#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // Insert 15 at index 1
    v.insert(v.begin() + 1, 15);

    cout << "After insertion: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // Delete last element
    v.pop_back();

    cout << "After deletion: ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    // Display size
    cout << "Size = " << v.size() << endl;

    return 0;
}
