
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;              
    cin >> n;
    if (n <= 3)
    {
        cout << "error";
    }
    else if (n <= 5)                          //  task B)
    {
         for(int i = 0; i < n; i++)
         {
             for(int a = 0; a < n; a++)
             {
                 if(i == 0 or a == 0 or i == n - 1 or a == n - 1)
                 {
                     cout << '*' << ' ';
                 }
                 else
                 {
                     cout << ' ' << ' ';
                 }
             } cout << endl;
             
         }
    }
    else if (n <= 15)                      // task Б)
    {
        for (int i = 0; i < n; i++)
        {
            for (int a = 0; a < n; a++)
            {
               cout << '*' << ' '; 
            }
            cout << endl;
        }
    }
    else if (n >= 16)                     // task A)
    {
        for (int i = 0; i < sqrt(n); i++)
        {
            for (int a = 0; a < sqrt(n); a++)
            {
                cout << '*' << ' ';
            } cout << endl;
        }
    }

    return 0;
}

