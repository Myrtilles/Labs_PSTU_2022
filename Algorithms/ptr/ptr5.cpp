

#include <iostream>

using namespace std;

int main()
{
    int *num = new int;
    int *fac = new int(1);
    cout << "enter number: ";
    cin >> *num;
 
    for(int i = 1; i <= *num; i++)
    {
        *fac = *fac * i;
    }
    cout << "factorial "<< *num << " is "<< *fac;

    return 0;
}
