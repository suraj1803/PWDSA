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
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j]; 

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j > i - 1) 
        cout << arr[i][j];
      else 
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}