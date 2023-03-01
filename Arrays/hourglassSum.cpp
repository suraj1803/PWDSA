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
  int m, n;
  cin >> m >> n;
  vector<vector<int>> arr(m, vector<int>(n));
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  vector<vector<int>> prefix(m, vector<int>(n));
  for (int i = 0; i < m; i++) 
    prefix[i][0] = arr[i][0];
  
  for (int i = 0; i < m; i++)
    for (int j = 1; j < n; j++)
      prefix[i][j] = arr[i][j] + prefix[i][j - 1];

  int maxSum = INT_MIN;
  for (int i = 1; i < m - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      int currentSum;
      if (j == 1) {
        currentSum = prefix[i - 1][j + 1] + arr[i][j] + prefix[i + 1][j + 1]; 
      }
      else  
        currentSum = 
        prefix[i - 1][j + 1] - prefix[i - 1][j - 2]  
        + prefix[i + 1][j + 1] - prefix[i + 1][j - 2] + arr[i][j];
      maxSum = max(currentSum, maxSum);
    }
  }

  cout << maxSum << endl;

  return 0;
}