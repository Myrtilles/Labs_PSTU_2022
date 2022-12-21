//   0.1x^2 - x lnx = 0     [1;2]

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 1;
    b = 2;
    while (b-a > eps)
    {
        c = (a+b)/2;
        fA = (0.1 * pow(a, 2) - a * log(a));
        fB = (0.1 * pow(b, 2) - b * log(b));
        fC = (0.1 * pow(c, 2) - c * log(c));
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { cout << "Something went wrong!" << endl; }    
    }
    cout << "Roots: " << a << "; " << b << endl;
    return 0;
}
