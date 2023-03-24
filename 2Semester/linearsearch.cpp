#include <iostream>

using namespace std;

int main()
{
    int size, key;
    bool flag = false;
    cout << "Enter size of an array:" << ' ';
    cin>> size;
    int mass[size];
    for(int i = 0;i < size;i++)
    {
        mass[i] = rand() % 101;
        cout << mass[i] << ' ';
    }
    cout<<"enter an element to be searched :" << ' ';
    cin >> key;
    for(int i = 0; i < size;i++)
    {
        if(key == mass[i])
        {
            cout << key << " is found with position "<< i + 1 <<endl;
            flag = true;
        }
    }
    if(!flag)
    {
        cout << key << " is not found.";
    }
    return 0;
}
