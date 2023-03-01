#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]" << " ";
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++) 
    cin >> arr[i];

  // make an array of same size and store the largest element in it from the end
  // by comparing via two pointers method
  vector<int> result(n);

  int l = 0;
  int r = n - 1;
  for (int i = n - 1; i >= 0; i--) {
    if (abs(arr[l]) > abs(arr[r])) {
      result[i] = arr[l] * arr[l];
      l++;
    }
    else { 
      result[i] = arr[r] * arr[r];
      r--;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}