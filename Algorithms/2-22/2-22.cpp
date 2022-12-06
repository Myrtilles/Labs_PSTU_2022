

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, pos, max = - 1;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if (a > max)
        {
            max = a;
            pos = i;
        }
    } cout << " the max number is" << max << endl << "the position of the number is" << pos;
    

    return 0;
}
