

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, a, s;
    bool flag = false;
    cout << "enter n" << endl; cin >> n; cout << "enter a required number s" << endl; cin >> s;
    for ( int i = 1; i <= n; i++)
    {
        a = sin(n + i / n);
        if ( s == a )
        {
            flag = true;
        }
    }
     if (flag)
        {
            cout << " s has been found!";
        }
        else
        {
            cout << " s hasn't been found!";
        }
     

    return 0;
}
