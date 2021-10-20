#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 4, 1, 2,7};
  int k = 7;
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = 0;

  // Calculate all subarrays
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      // Calculate required sum
      sum += arr[j];

      // Check if sum is equal to
      // required sum
      if (sum == k)
        res++;
    }
  }
  cout << (res) << endl;
}
