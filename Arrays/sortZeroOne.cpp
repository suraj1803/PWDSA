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
  vector<int> arr(n);
  for (int i = 0; i < n ;i++) 
    cin >> arr[i];
  
  int l = 0;
  int r = n - 1;
  while (l < r) {
    if (arr[r] == 0){
      swap(arr[l], arr[r]);
      l++;
      r--;
    }
    else if (arr[r] == 1)
      r--;
  }

  print(arr);

  return 0;
}