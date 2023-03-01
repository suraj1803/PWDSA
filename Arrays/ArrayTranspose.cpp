#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}

int main()
{
  int r1,c1;
  cin >> r1 >> c1;
  int a[r1][c1];
  for (int i = 0; i < r1; i++) 
    for (int j = 0; j < c1; j++) 
      cin >> a[i][j];

  int b[c1][r1];
  for (int i = 0; i < c1; i++) {
    for (int j = 0; j < r1; j++) {
      b[i][j] = a[j][i];
    }
  }

  for (int i = 0; i < c1; i++) {
    for(int j = 0; j < r1; j++)
      cout << b[i][j] << " ";
    cout << endl;
  }
  return 0;
}