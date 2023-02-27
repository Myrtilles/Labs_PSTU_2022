
#include <iostream>

using namespace std;

void bucketSort(int mass[], int n) 
{
	const int bAmount = 10; 
	const int sizeMass = 10; 

	int buckets[bAmount][sizeMass];

	int bSizes[bAmount] = {0};

	for (int i = 0; i < n; i++) 
	{
		int bIndex = mass[i] / bAmount;
		buckets[bIndex][bSizes[bIndex]] = mass[i];
		bSizes[bIndex]++;
	}

	for (int i = 0; i < bAmount; i++) 
	{
		for (int j = 1; j < bSizes[i]; j++) 
		{
			int tmp = buckets[i][j];
			int k = j - 1;
			while (k >= 0 && buckets[i][k] > tmp) 
			{
				buckets[i][k + 1] = buckets[i][k];
				k--;
			}
			buckets[i][k + 1] = tmp;
		}
	}

	int index = 0;
	for (int i = 0; i < bAmount; i++) 
	{
		for (int j = 0; j < bSizes[i]; j++) 
		{
			mass[index++] = buckets[i][j];
		}
	}
}

int main() 
{
	int size;
	cout << "Enter size of an array:" << endl;
	cin >> size;
	int* mass = new int[size];
	for (int i = 0; i < size; i++) 
	{
		mass[i] = rand() % 100;
	}
	cout << endl;
	
	bucketSort(mass, size);

	for (int i = 0; i < size; i++) 
	{
		cout << mass[i] << ' ';
	}
	delete[] mass;
	
	
	return 0;
}
