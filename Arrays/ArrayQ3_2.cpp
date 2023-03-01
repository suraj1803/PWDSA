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

  int highest = 0;
  for (int k = 0; k < arr.size(); k++) {
    arr[k] = (k == 0) ? arr[k] : arr[k - 1] + arr[k];
    highest = max(highest, arr[k]);
  }
  
  cout << highest << endl;

  return 0;
}