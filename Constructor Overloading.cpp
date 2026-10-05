#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    // Default Constructor
    Student()
    {
        id = 0;
        name = "Unknown";
    }

    // Parameterized Constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101, "Rajith");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}
