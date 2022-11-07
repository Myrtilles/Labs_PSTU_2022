/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n <= 3 or n > 3) and n % 2 == 0)
    {
        cout << "error";
    }
    else
    {
        for ( int i = 1; i <= n / 2 + 1; i++)
        {
            for ( int x = 1; x <= n / 2 + 1 - i; x++)
            {
                cout << ' ';
            }
            for ( int y = 1; y <= i * 2 - 1; y++)
            {
                cout << '*';
            } cout << endl;
        }
    }

    return 0;
}
