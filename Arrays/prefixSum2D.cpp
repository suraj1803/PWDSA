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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  vector<vector<int>> prefix(n, vector<int>(m));

  for (int  i = 0; i < m; i++)
    prefix[i][0] = arr[i][0];

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < m; j++) {
      prefix[i][j] = arr[i][j] + prefix[i][j - 1];
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      prefix[i][j] += prefix[i - 1][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) 
      cout << prefix[i][j] << " ";
    cout << endl;
  }

  
  return 0;
}