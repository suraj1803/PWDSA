#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}

int factorial(int n) {
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  int r, c;
  cin >> r >> c;
  vector<vector<int>> arr(r,vector<int>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      cin >> arr[i][j];
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      cout << arr[i][j] << " ";
    cout << "\n";
  }
  return 0;
}