

#include <iostream>

using namespace std;

int main()
{
    int n, num, el;
    cin >> n >> num;
	el = num;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		if (el == 0)
		{
		el = num;
		}
	}
		if (el > 0) 
		{
		cout << "positive number goes first";
		}
		else if (el < 0) 
		{
		cout << "negative number goes first";
		}
		else if (el == 0) 
		{
		cout << "there're nulls only";
		}

    return 0;
}
