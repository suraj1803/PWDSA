// Given a sorted array of positive integers, rearrange the array alternately 
// i.e first element should be a maximum value, at second position minimum value, 
// at third position second max, at fourth position second min, and so on

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
  // 1 2 3 4 5
  // 5 1 4 2 3
  int l = 0;
  int r = arr.size() - 1;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = arr[r];
    if (i < n - 1)
      ans[i + 1] = arr[l];
    i++;
    l++;
    r--;
  }

  print(ans);

  return 0;
}
