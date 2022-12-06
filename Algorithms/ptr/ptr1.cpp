#include <iostream>

using namespace std;

int main()
{
    int num1, num2, tmp;
    cin >> num1 >> num2;
    int *ptr = &num1;
    tmp = num2;
    num2 = *ptr;
    ptr = &tmp;
    num1 = *ptr;
    cout << num1 << ' ' << num2;

    return 0;
}

