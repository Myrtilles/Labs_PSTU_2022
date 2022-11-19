

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, max = - 1;
    int amount = 0;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
        }
        else if (a == max)
        {
            amount += 1;
        }
    } cout << " the amount of coinciding max numbers is" << ' ' << amount;
    

    return 0;
}
