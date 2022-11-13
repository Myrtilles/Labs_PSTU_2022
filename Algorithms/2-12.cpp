
#include <iostream>

using namespace std;

int main()
{
    unsigned int n, num, min = 10000, max = 0 ;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num < min and num != 0)
        {
            min = num;
        }
         if (num > max and num > min)
        {
            max = num;
        }
        
    } cout << min + max;
    

    return 0;
}
