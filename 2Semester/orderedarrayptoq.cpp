
#include <iostream>
using namespace std;

int main()
{
	int mass[100];
	int n, p, q, tmp;
	
    cout << "Enter size of the array" << endl;
	cin >> n;
	cout << "Enter the array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
	}
	cout << "Enter the borderline numbers of the sort" << endl;
	cin >> p >> q;

	for (int i = 0; i < (q - p + 1)/ 2; i++)
	{
		tmp = mass[p + i];
		mass[p + i] = mass[q - i];
		mass[q - i] = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}

}

