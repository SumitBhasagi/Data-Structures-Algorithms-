// Pattern 13

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

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
    while (space <= n - i)
    {
      cout << "  ";
      space = space + 1;
    }
    for (int j = 0; j < i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
