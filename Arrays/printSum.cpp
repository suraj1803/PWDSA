#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << "\n";
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  for (int  j = 1; j < arr.size(); j++) {
    arr[j] += arr[j - 1];
  }

  int q;
  cin >> q;

  while (q--) {
    int l, r;
    cin >> l >> r;
    if (l == 1)
      cout << arr[r - 1] << endl;
    else
      cout << arr[r - 1] - arr[l - 2] << endl;
  }
  
  return 0;
}