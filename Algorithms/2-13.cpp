

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c;
    d = ( b*b - 4*a*c);
    if (d < 0)
    {
        cout << " x has no roots here, but a green card ";
    }
    else if (d == 0)
    {
        cout << " x = " << (-1*b + sqrt(d)) / (2*a);
    }
    else
    {
        cout << " x1 = " << (-1*b + sqrt(d)) / (2*a) << endl;
        cout << "x2 = " << (-1*b - sqrt(d)) / (2*a);
    }

    return 0;
}
