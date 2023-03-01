#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}


// by using two arrays
void makeZero1(vector<vector<int>> &arr) {
  int m = arr.size();
  int n = arr[0].size();
  vector<int> row(m, 0);
  vector<int> col(n, 0);

  for (int i = 0; i < m; i++) { 
    for (int j = 0; j < n; j++) 
      if (arr[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
  }

  for (int i = 0; i < m; i++) {
    // make rows zero
    if (row[i] == 1) {
      for (int j = 0; j < n; j++) 
        arr[i][j] = 0;
    }
  }

  // make cols zero
  for (int i = 0; i < n; i++) {
    if (col[i] == 1) {
      for (int  j = 0; j < m; j++)
        arr[j][i] = 0;
    }
  }
}

// by using O(1) space
void makeZero2(vector<vector<int>> &arr) {
  int m = arr.size();
  int n = arr[0].size();
  bool rowZero = false;
  // finding all the zeroes and using the first row and first col to store
  // the index of in which row or col all the elements should be 0
  for (int i = 0; i < m ; i++){
    for (int j = 0; j < n ; j++) {
      if (arr[i][j] == 0){
        arr[0][j] = 0;
        if (i > 0)
          arr[i][0] = 0;
        else 
          rowZero = true;
      }
    }
  }

  // now except first row and first col,  loop through the entire matrix and
  // making them zero using the first row and first col
  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (arr[0][j] == 0 or arr[i][0] == 0)
        arr[i][j] = 0;
    }
  }

  // if the first row should be zero we make it
  if (rowZero) {
    for (int i = 0; i < n; i++) {
      arr[0][i] = 0;
    }
  }

  // if the first col should be zero we make it
  if (arr[0][0] == 0) {
    for (int i = 0; i < m; i++) {
      arr[i][0] = 0;
    }
  }
}

int main()
{
  int m, n;
  cin >> m >> n; 
  vector<vector<int>> arr(m, vector<int>(n));
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  makeZero2(arr);

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << "\n";
  }


  return 0;
}