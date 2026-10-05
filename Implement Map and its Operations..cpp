#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> students;

    // Insert elements
    students[101] = "Lakshmi";
    students[102] = "Santhosh";
    students[103] = "Shiva";

    cout << "Student details:" << endl;

    map<int, string>::iterator it;

    for (it = students.begin(); it != students.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    // Access an element
    cout << "Student with roll 102: "
         << students[102] << endl;

    // Delete an element
    students.erase(103);

    cout << "After deletion:" << endl;

    for (it = students.begin(); it != students.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
