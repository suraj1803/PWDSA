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
  int n; 
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++)
    cin >> arr[i];

  int product = 0;
  bool isZero = false;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      product = (product == 0) ? 1 : product;
      product *= arr[i];
    }
    else 
      isZero = true;
  }

  for (int i = 0; i < n; i++) {
    if(isZero && arr[i] != 0)
      cout << 0 << " ";
    else if (!isZero && arr[i] != 0)
      cout << product / arr[i] << " ";
    else if (arr[i] == 0)
      cout << product << " ";
  }
  cout << endl;

  return 0;
}