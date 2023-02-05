

#include <iostream>
using namespace std;

int main()
{
	int mass[100];
	int n;
	bool ordered = true;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> mass[i];
	}

	for (int i = 1; i <= n - 1; i++)
	{
		if (mass[i] > mass[i + 1])
		{
			cout << "The array isn't ordered by increasing";
			ordered = false;
			return 0;
		}
	}
	if (ordered)
	{
		cout << "The array is ordered by increasing";
	}

}
