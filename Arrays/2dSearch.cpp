#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}

int search(vector<vector<int>> &arr) {
  int maximum = arr[0][0];
  for (int i = 0; i < arr.size(); i++)
    for (int j = 0; j < arr[i].size(); j++)
      maximum = max(maximum, arr[i][j]);
  
  return maximum;
}

int main()
{
  int m, n;
  cin >> m >> n;
  vector<vector<int>> arr(m, vector<int>(n));
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
  
  cout << search(arr) << endl;

  return 0;
}