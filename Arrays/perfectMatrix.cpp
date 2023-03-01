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

bool checkPerfectSquare(vector<vector<int>> &arr) {
  int m = arr.size();
  int n = arr[0].size();

  // first row
  bool firstrow = true;
  for (int i = 0; i < n; i++) {
    int row = 0;
    int col = i;
    int num = arr[row++][col++];
    while (row < m && col < n){
      if (arr[row][col] != num) {
        firstrow = false;
        break; 
      }
      row++;
      col++;
    }
  }

  bool firstcol = true;
  for (int i = 1; i < m; i++) {
    int row = i;
    int col = 0;
    int num = arr[row++][col++];
    while (row < m && col < n){
      if (arr[row][col] != num) {
        firstcol = false;
        break; 
      }
      row++;
      col++;
    }
  }

  return firstcol && firstrow;
}

int main()
{
  int m, n;
  cin >> m >> n;
  vector<vector<int>> arr (m, vector<int>(n));
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++) 
      cin >> arr[i][j];

  if (checkPerfectSquare(arr)) 
    cout << 1 << endl;
  else 
    cout << 0 << endl;
  return 0;
}