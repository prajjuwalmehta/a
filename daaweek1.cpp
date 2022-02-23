#include <iostream>
using namespace std;
int
main ()
{
  int t;
  cout << "enter number of test cases" << endl;
  cin >> t;
  while (t > 0)
    {
      int n, key, flag = 0, c = 0, i;
      cout << "enter the number of elements" << endl;
      cin >> n;
      int a[n];
      for (i = 0; i < n; i++)
	{
	  cout << "enter array elements" << endl;
	  cin >> a[i];
	}
      cout << "enter the key" << endl;
      cin >> key;
      for (i = 0; i < n; i++)
	{
	  if (key == a[i])
	    {
	      flag = 1;
	      break;
	    }
	  c++;
	}
      if (flag == 1)
	cout << "found after  " << c + 1 << "  comparisons" << endl;
      else
	cout << "not found after  " << c << "  comparisons" << endl;
      t--;
    }
  return 0;
}
