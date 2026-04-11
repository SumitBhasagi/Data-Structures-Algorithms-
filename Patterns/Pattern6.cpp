// Pattern 7

// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  int count = 1;

  for (int i = 0; i < n; i++)
  {
    count = i;
    for (int j = 0; j < i; j++)
    {
      cout << count << " ";
      count--;
    }
    cout << endl;
  }

  return 0;
}