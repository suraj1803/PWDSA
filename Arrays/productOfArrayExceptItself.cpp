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
  for(int i = 0; i < n; i++) 
    cin >> arr[i];

  vector<int> prefix(n);
  vector<int> suffix(n);
  prefix[0] = suffix[n - 1] = 1;
  for (int i = 1; i < n; i++)
    prefix[i] = prefix[i - 1] * arr[i - 1];
  for (int i = n - 2; i >= 0; i--)
    suffix[i] = suffix[i + 1] * arr[i + 1];

  for (int i = 0; i < n; i++)
    arr[i] = prefix[i] * suffix[i];
  
  print(arr);

  return 0;
}