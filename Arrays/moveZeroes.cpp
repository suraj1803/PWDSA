// move all the zeroes to end
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(vector<int> &a)
{
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

  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      arr[j++] = arr[i];
    }
  }

  for (int k = j; k < n; k++) {
    arr[k] = 0;
  }
  print(arr);

  return 0;
}