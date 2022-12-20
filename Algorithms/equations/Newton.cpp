//   f(x) = 0.1x^2 - x lnx
//   f'(x) = 0.2x - 1/x
//   f''(x) = 0.2 + 1/x^2
//   [1;2]

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float x, xPrev;
    // f(a) * f''(a) > 0         x0 = a
    x = 1;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - (0.1 * pow(xPrev, 2) - xPrev * log(xPrev)) / (0.2 * x - 1 / x );
    }
    cout << "Корень: " << x << endl;
    return 0;
}
