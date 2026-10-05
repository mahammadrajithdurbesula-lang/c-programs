#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;  
};

class Circle : public Shape
{
    float r;

public:
    Circle(float radius)
    {
        r = radius;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
    float l, b;

public:
    Rectangle(float length, float breadth)
    {
        l = length;
        b = breadth;
    }

    void area()
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape
{
    float b, h;

public:
    Triangle(float base, float height)
    {
        b = base;
        h = height;
    }

    void area()
    {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 4);

    Shape *ptr;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    ptr = &t;
    ptr->area();

    return 0;
}
