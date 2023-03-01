#include <iostream>
#include <vector>
#define v vector<int>
#define vv vector<vector<int>>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}

vector<vector<int>> pascalTriangle(int n) {
  vector<vector<int>> arr(n);
  for (int i = 0; i < n; i++) {
    arr[i].resize(i + 1);
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || j == i)
        arr[i][j] = 1;
      else
        arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }
  }
  return arr;
}

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> arr;
  arr = pascalTriangle(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}