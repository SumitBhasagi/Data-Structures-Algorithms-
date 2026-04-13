// Smallest Element in an Array;

#include <iostream>
#include <climits>

using namespace std;

int getMin(int arr[], int n)
{
  int min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int main()
{
  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements of array: ";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Smallest element in array is: " << getMin(arr, size) << endl;

  return 0;
}