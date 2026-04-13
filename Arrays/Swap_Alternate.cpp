// Swap Alternate

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i + 1 < n)
    {
      swap(arr[i], arr[i + 1]);
      i = i + 1;
    }
  }
}

int main()
{
  int arr[10] = {1, 2, 7, 8, 5, 6, 9, 7, 5, 2};

  swapAlternate(arr, 10);

  cout << "Swapped Alternate Positions: ";

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}