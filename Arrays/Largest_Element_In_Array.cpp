// Largest element in an Array

#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the array elements: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Max Value is: " << getMax(arr, size) << endl;

  return 0;
}
