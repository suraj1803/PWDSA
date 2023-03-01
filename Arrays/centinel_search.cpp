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

// number of comparisons is reduced to n + 2 from 2n + 1
// because we eliminate index out of bound comparisons from loop
int sentinelSearch(vector<int> &arr, int key) {
  int n = arr.size();
  int last = arr[n - 1];
  arr[n - 1] = key;

  int i = 0;
  while (arr[i] != key)
    i++;

  arr[n - 1] = last;

  if (i < n - 1 or arr[n - 1] == key)
    return i;
   
  return -1;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int q;
  cin >> q;
  while (q--) {
    int key;
    cin >> key;
    cout << sentinelSearch(arr, key) << "\n";
  }

  return 0;
}