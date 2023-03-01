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

int maxOnesRow(vector<vector<int>> &arr) {
  int leftMostOne = -1;
  int maxOnesRow = -1;
  int j = arr[0].size() - 1;
  for (int i = 0; i < arr.size(); i++) {
    while (j >= 0 && arr[i][j] == 1) {
      leftMostOne = j;
      maxOnesRow = i;
      j--;
    }
  }
  return maxOnesRow;
}

int main()
{
  int r, c;
  cin >> r >> c;
  vector<vector<int>> arr(r, vector<int>(c));
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      cin >> arr[i][j];

  // int maxOnes = 0; 
  // int row = 0;
  // for (int i = 0; i < r; i++) {
  //   for (int j = 0; j < c; j++) {
  //     if (arr[i][j] == 1) {
  //       if (c - j > maxOnes) {
  //         row = i;
  //         maxOnes = c - j;
  //       }
  //       break;
  //     }
  //   }
  // }

  // cout << row<< endl;

  cout << maxOnesRow(arr) << endl;
  
  return 0;
}