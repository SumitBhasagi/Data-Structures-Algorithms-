// Given an integer array nums (0-indexed) and two integers target and start, find an index i such that nums[i] == target and abs(i - start) is minimized. Note that abs(x) is the absolute value of x.

// Return abs(i - start).

// It is guaranteed that target exists in nums.

// Example 1:
// Input: nums = [1,2,3,4,5], target = 5, start = 3
// Output: 1
// Explanation: nums[4] = 5 is the only value equal to target, so the answer is abs(4 - 3) = 1.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMinDistance(vector<int> arr, int target, int start)
{
  int ans = INT_MAX;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == target)
    {
      int dist = abs(i - start);
      ans = min(ans, dist);
    }
  }
  return ans;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  cout << "Final Answer: " << getMinDistance(arr, 5, 3);
  return 0;
}