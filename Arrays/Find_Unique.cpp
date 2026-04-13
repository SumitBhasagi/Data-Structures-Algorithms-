// You have been given an array of size N, where N is equal to [2M+1]. Now in the given array list, M numbers are present twice and one number is present only once. You need to find and return that number which is unique in the array list. 

// eg. {3, 7, 2, 2, 7, 3, 4} 
// here 3, 7, 2 appeared twice and 4 appeared only once so return 4 

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
 
int findUnique(int arr[], int n){
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
     ans ^= arr[i]; 
  }
  return ans;
}


int main(){ 
  int arr[5] = {2, 3, 2, 4, 3};

  cout<<" Unique Element Present is: "<<findUnique(arr, 5);
  
  return 0;
}