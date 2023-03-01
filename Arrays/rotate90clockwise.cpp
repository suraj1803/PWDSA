#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a)
{
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]"
         << " ";
  cout << endl;
}

void rotateImage(vector<vector<int>> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n / 2; i++)
  {
    int l = i;
    int r = n - 1 + i;
    while (l < r)
    {
      int temp = arr[l][i];
      arr[l][i] = arr[n - i - 1][l + 0];
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  // first do transpose of matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }

  // now swap coloumns like first and last ,  second and second-last
  for (int i = 0; i < n / 2; i++) {
    for (int j = 0; j < n; j++) {
        swap(arr[j][i], arr[j][n - i - 1]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  return 0;
}