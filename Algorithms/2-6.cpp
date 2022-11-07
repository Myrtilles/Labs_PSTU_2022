/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  if (n <= 2)
    {
      cout << "error, n must be > 2";
    }
  else
    {
      for (int i = 0; i <= n; i++)
	{
	  for (int x = i; x > 0; x--)
	    {
	      cout << ' ';
	    }
	  for (int y = i; y < n; y++)
	    {
	      cout << '*';

	    } cout << '\n';
	}
    }

  return 0;
}
