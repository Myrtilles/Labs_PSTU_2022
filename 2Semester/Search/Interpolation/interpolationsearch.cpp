

#include <iostream>

using namespace std;

void InterpolationSearch(int m[],int l,int r, int key)
{

   int mid = l + (r - 1 - l) * (key - m[l]) / (m[r - 1] - m[l]);
   if (m[mid] == key)
    {
       cout << key << " is found with position "<< mid + 1 <<endl;
    }
   else
    {
       cout << key << " is not found.";
    }
}


int main()
{
    
    int size, key;
    cout << "Enter size of an array:";
    cin >> size;
    int mass[size];
    for(int i = 0; i < size; i++)
    {
      mass[i] = rand() % 101;
      cout << mass[i] << ' ';
    }
    cout << endl << "Enter an element to be searched:" << ' ';
    cin >> key;
    InterpolationSearch(mass,0, size, key);

    return 0;
}

