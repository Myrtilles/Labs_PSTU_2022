//   f(x) = 0.1x^2 - x lnx
//   f'(x) = 0.2x - 1/x
//   f''(x) = 0.2 + 1/x^2
//   [1;2]

//   fi(x) = x + lambda(0.1x^2 - x lnx)
//  -1/r < λ < 0,   f'(x) > 0
//  0 < λ < 1/r,   f'(x) < 0
//  r = max(|f'(a)|, |f'(b)|)


#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float x, xPrev;
    double lambda = 0.25 ;
    x = 1;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * ( 0.1 * pow(xPrev, 2) - xPrev * log(xPrev)) + xPrev;
    }
    cout << "Корень по методу итераций: " << x << endl;
    return 0;
}
