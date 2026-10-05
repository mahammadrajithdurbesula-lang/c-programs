#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, root1, root2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        cout << "Roots are: " << root1 << " and " << root2;
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        cout << "Both roots are equal: " << root1;
    }
    else
    {
        cout << "Roots are imaginary";
    }

    return 0;
}
