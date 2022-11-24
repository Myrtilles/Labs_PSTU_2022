

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    if ( n < 0)
    {
        cout << "error, n must be > 0";
    }
    else
    {
        while(n)
        {
            sum += n % 10;
            n = n / 10;
        }
    } cout << sum;

    return 0;
}
