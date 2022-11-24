

#include <iostream>

using namespace std;

int main()
{
    int n, s, a;
    cin >> n >> s;
    if ( n < 0)
    {
        cout << "error, n must be > 0";
    }
    else
    {
        while(n)
        {
            a = n % 10;
         if ( s == a)
            {
                cout << "yes"; break;
            }
        else
        {
            n = n / 10;
        }
        }
        if (s =! n)
        {
            cout << "no";
        }
        }
      
 

    return 0;
}
