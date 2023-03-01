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

void print(vector<int> &arr, int start, int end) {
  if (start == end) 
    return;
  cout << arr[start] << " ";
  print(arr, start + 1, end);
}

int maxValue(vector<int> &arr, int s, int e) {
  if (s == e)
    return arr[s - 1];
  return max(arr[s], maxValue(arr, s + 1, e));
}

int sum(vector<int> &arr, int s, int e) {
  if (s == e - 1)
    return arr[s];
  
  return arr[s] + sum(arr, s + 1, e);
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  cout << sum (arr, 0, n) << endl;

  return 0;
}