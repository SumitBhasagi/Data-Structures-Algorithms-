// Linear Search

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  int arr[10] = {5, 9, 5, 81, 25, 69, 78, 7, 77, 777};
  int key;

  cout << "Enter the element to search for: " << endl;
  cin >> key;

  bool found = search(arr, 10, key);

  if (found)
  {
    cout << "Key is Present" << endl;
  }
  else
  {
    cout << "Key is not there" << endl;
  }
  return 0;
}