
#include <iostream>
using namespace std;

int i, j, size, d, tmp;
void Shellsort(int mass[], int size)
{
   d = size;
   d = d / 2;
   while (d > 0)
   {
      for (i = 0; i < size - d; i++)
      {
          j = i;
          while (j >= 0 and mass[j] > mass[j + d])
          {
             tmp = mass[j];
             mass[j] = mass[j + d];
             mass[j + d] = tmp;
             j--;
          }
      } 
      d = d / 2;
   }
} 

int main()
{
cout << "Enter size of an array:" << ' ';
cin >> size;
int *mass = new int[size];
cout << "Enter elements of the array:" << ' ' << endl;
for (i = 0; i < size; i++)
{
   cin >> mass[i]; 
}
Shellsort(mass, size);
for (i = 0; i < size; i++)
{
   cout << mass[i] << " ";
}
delete []mass;
}
