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

int search(vector<int> &arr, int key) {
  int l = 0;
  int r = arr.size();
  while (l < r) {
    int m = l + (r - l) / 2;
    if (arr[m] == key)
      return m;
    else if (arr[m] > key)
      r = m - 1;
    else 
      l = m + 1;
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << search(arr, 1) << endl;

  return 0;
}