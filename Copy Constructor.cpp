#include <iostream>
using namespace std;

class Student
{
    int id;

public:
    Student(int i)
    {
        id = i;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        id = s.id;
    }

    void display()
    {
        cout << "Student ID: " << id << endl;
    }
};

int main()
{
    Student s1(101);

    // Copying s1 into s2
    Student s2 = s1;

    cout << "Original Object:" << endl;
    s1.display();

    cout << "Copied Object:" << endl;
    s2.display();

    return 0;
}
