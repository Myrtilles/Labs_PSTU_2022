#include <iostream>

using namespace std; 


void quickSort(int* mass, int first, int last)
{
	if (first < last)
	{
		int l = first;
		int r = last;
		int mid = mass[(l + r) / 2];
		do
		{
			while (mass[l] < mid)
			{
				l++;
			}
			while (mass[r] > mid)
			{
				r--;
			}
			if (l <= r)
			{
				int tmp = mass[l];
				mass[l] = mass[r];
				mass[r] = tmp;
				l++;
				r--;
			}
		} while (l < r);
		quickSort(mass, first, r);
		quickSort(mass, l, last);
	}
	return;
}

int main()
{

	int size;
	cout << "Enter size of an array:" << endl;
	cin >> size;
	int* mass = new int[size];
	for (int i = 0; i < size; ++i)
	{
		mass[i] = rand() % 100;
	}
	quickSort(mass, 0, size - 1);
	for (int i = 0; i < size; ++i)
	{
		cout << mass[i] << ' ';
	}
	delete[] mass;
	return 0;
}