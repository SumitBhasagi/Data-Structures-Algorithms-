// Reverse an Array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[6] = {5, 6, 7, 1, 9, 2};

  reverseArray(arr, 6);

  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}