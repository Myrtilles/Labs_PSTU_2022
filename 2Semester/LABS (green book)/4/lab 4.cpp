#include <iostream>

using namespace std;

int main() 
{
    // original array
	int size;
	cout << "Enter size of an array:" << endl;
	cin >> size;
	int* mass = new int[size];
	for (int i = 0; i < size; i++) 
	{
		mass[i] = rand() % 100;
		cout << mass[i] << ' ';
	}	


	// direction of the ring
	int k;
	cout << endl << "Enter k:" << ' ';
	cin >> k;
	cout << "Look at the ring!" << ' ';
	for (int i; i < size; i++)
	{
		cout << mass[k] << " ";
		k++;
		if (k > size - 1)
		{
			k -= size;
		}
	}
	cout << endl;


	// adding the first and the last elements of the ring
	for (int i = size; i > 0; i--)
        {
            mass[i] = mass[i - 1];
        }
        mass[0] = rand() % 25;
        mass[size + 1] = rand() % 25;
        cout << "The array after adding elements:" << ' ';
        for (int i = 0; i < size; i++)
        {
            cout << mass[i] << ' ';
        }
	

	// deleting elements with even numbers
	cout << "Final version of the array:";
	int i = 0;
	for (int j = 0; j < size; j++)
	{
		mass[i] = mass[j];
		if (mass[j] % 2 != 0) 
		{
			i++;
			cout << mass[j] << " ";
		}
	}
}
