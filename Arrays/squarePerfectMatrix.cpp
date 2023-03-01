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


bool checkPerfectMatrix(vector<vector<int>> &arr) {
  int n = arr.size();
  
  for (int i = 0; i < n; i++) {
    if (arr[i][i] == 0 || arr[i][n - i - 1] == 0)
      return false;
    for (int j = 0; j < n; j++) {
      if (j == i || j == n - i - 1)
        continue;
      else if (arr[i][j] != 0)
        return false;
    }
  }

  return true;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j]; 

  cout << checkPerfectMatrix(arr) << endl;
  return 0;
}