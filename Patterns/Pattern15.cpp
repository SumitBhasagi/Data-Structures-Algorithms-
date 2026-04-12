// Pattern 16

// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int space = 1;
    while (space < i)
    {
      cout << "  ";
      space++;
    }

    for (int j = 0; j <= n - i; j++)
    {
      cout << i << " ";
    }

    cout << endl;
  }

  return 0;
}
