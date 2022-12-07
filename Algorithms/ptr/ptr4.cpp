

#include <iostream>

using namespace std;

int main()
{
    int n, tmp, max, min, *ptr=&tmp;

cout << "enter the length of the order" << endl;
cin >> n;

cout << " enter the first number" << endl;
cin >> *ptr;
max = *ptr;
min = *ptr;

for (int i = 2; i <= n; i++)
{
    cout << " enter the next number" << endl;
    cin >> *ptr;
    if (*ptr > max)
    {
        max = *ptr;
    }
    else if (*ptr < min)
    {
        min = *ptr;
    }
}
cout << " Max element is " << max << endl << " Min element is " << min << endl;

    return 0;
}
