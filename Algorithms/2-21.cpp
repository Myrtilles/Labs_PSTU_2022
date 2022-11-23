

#include <iostream>

using namespace std;

int main()
{
    int tmp, next;
    bool ordered = true;
    cin >> tmp;
    while ( tmp != 0)
    {
        cin >> next;
        if ( next != 0 and tmp > next)
        {
            ordered = false;
        }
        tmp = next;
    }
    if (ordered)
    {
        cout << "numbers are ordered by increasing";
    }
    else
    {
        cout << "numbers aren't ordered";
    }

    return 0;
}
