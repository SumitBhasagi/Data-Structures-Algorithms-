// Pattern 20

//    1
//   2 3
//  4 5 6
// 7 8 9 10

// Triangle

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  int count = 1;

  for (int i = 0; i <= n; i++)
  {
    for (int k = 0; k < n - i; k++)
    {
      cout << " ";
    }

    for (int j = 0; j < i; j++)
    {
      cout << count << " ";
      count++;
    }

    cout << endl;
  }

  return 0;
}