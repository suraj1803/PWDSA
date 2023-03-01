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

void reverse(vector<int> &arr, int l, int r) {
  while (l < r) {
    swap(arr[l++], arr[r--]);
  }
}

void leftRotate(vector<int> &arr, int d) {
  d = d % arr.size();
  // reverse the whole array
  reverse(arr, 0, arr.size() - 1);

  // reverse the first half
  reverse(arr, 0, arr.size() - d - 1);

  // reverse the second half
  reverse(arr, arr.size() - d, arr.size() - 1);
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n); 
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  leftRotate(arr, 1);
  print(arr);
  
  return 0;
}