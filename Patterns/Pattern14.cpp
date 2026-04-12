// Pattern 15

// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    int space = 1;
    while (space <= i)
    {
      cout << "  ";
      space = space + 1;
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << " *";
    }

    cout << endl;
  }

  return 0;
}