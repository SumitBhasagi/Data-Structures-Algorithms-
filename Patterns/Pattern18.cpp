// Pattern 21

//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    int count = 1;
    int count2 = i;

    for (int k = 0; k < n - i; k++)
    {
      cout << " ";
    }

    for (int j = 0; j < i; j++)
    {
      cout << count;
      count++;
    }
    for (int m = i - 1; m > 0; m--)
    {
      cout << m;
    }

    cout << endl;
  }

  return 0;
}