#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x;
    int *ptr = &x;
    cin >> y;
    *ptr = y;
    cout << *ptr;
    
    
    return 0;
}

