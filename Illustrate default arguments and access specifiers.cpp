#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m = 50)
    {
        marks = m;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.setMarks(85);
    s2.setMarks();       

    s1.display();
    s2.display();

    return 0;
}
