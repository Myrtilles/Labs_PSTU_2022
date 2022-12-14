#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    cin >> num1 >> num2;
    float *ptr1 = &num1;
    float *ptr2 = &num2;
    cout << *ptr1 + *ptr2;
    
    return 0;
}

