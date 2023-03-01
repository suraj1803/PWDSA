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
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  int first, second;
  first = second = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > first) {
      second = first;
      first = arr[i];
    }
  }

  cout << second << endl;

  return 0;
}