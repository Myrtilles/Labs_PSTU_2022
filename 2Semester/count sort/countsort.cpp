

#include <iostream>

using namespace std;

void countSort(int mass[], int size)
{
    int *output = new int[size];
    int *count;
    int max = mass[0];

    for (int i = 1; i < size; i++)
    {
        if (mass[i] > max) { max = mass[i]; }
    }

    count = new int[max+1];
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[mass[i]]++;
    }
    
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i-1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[mass[i]] - 1] = mass[i];
        count[mass[i]]--;
    }
    for (int i = 0; i < size; i++)
    {
        mass[i] = output[i];
    }
}


void display(int mass[], int size) 
{
  for (int i = 0; i < size; i++)
    cout << mass[i] << " ";
  cout << endl;
}


int main()
{
  int mass[] = {24, 11, 35, 9, 67, 71, 5};
  int size = sizeof(mass) / sizeof(mass[0]);
  countSort(mass, size);
  display(mass, size);

    return 0;
}
