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

// Given a matrix of dimension n x m and 2 coordinates (l1, r1) and (l2, r2).
// Return the sum of the rectangle from (l1, r1) to (l2, r2)

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  // ⭐Method 1
  // int sum = 0;
  // for (int i = l1; i <= l2; i++) {
  //   for (int j = r1; j <= r2; j++) {
  //     sum += arr[i][j];
  //   }
  // }

  // ⭐Method 2 (Prefix sum of every row)
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < m; j++) {
      arr[i][j] += arr[i][j - 1];
    }
  }

  int sum = 0;
  for (int i = l1 ; i <= l2; i++) {
    sum += (r1 == 0) ? arr[i][r2] : arr[i][r2] - arr[i][r1 - 1];
  }

  cout << sum << endl;

  return 0;
}