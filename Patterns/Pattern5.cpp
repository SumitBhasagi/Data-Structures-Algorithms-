// Pattern 6

// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

#include <iostream>
using namespace std;

int main()
{
  int n;
  int count = 1;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {  
    count = i;
    for (int j = 1; j <= i; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }

  return 0;
}