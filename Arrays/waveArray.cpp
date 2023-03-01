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
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i+=2) {
    swap(arr[i], arr[i + 1]);
  }
  print(arr);
  return 0;
}