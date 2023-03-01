// Given an array arr[] of integers, segregate even and odd numbers in the array. 
// Such that all the even numbers should be present first, and then the odd numbers.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
}

int main()
{
  int n; 
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> ans(n);
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0)
      ans[j++] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0)
      ans[j++] = arr[i];
  }

  print(ans);

  return 0;
}