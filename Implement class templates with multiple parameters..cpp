#include <iostream>
using namespace std;

template <class T, class U>
class Student
{
    T rollNo;
    U marks;

public:
    Student(T r, U m)
    {
        rollNo = r;
        marks = m;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student<int, float> s1(101, 89.5);
    s1.display();

    Student<int, int> s2(102, 95);
    s2.display();

    return 0;
}
