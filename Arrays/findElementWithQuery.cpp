#include <iostream>
#include <vector>
using namespace std;


int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++) 
    cin >> arr[i];

  // cout << "Enter Queries: ";
  int q;
  cin >> q;

  const int N = 1e5 + 10;
  vector<int> freq(N,0);
  for (int i = 0; i < n; i++) 
    freq[arr[i]]++;
  
  while (q--) {
    int queryElement;
    cin >> queryElement;
    cout << freq[queryElement] << endl;
  }

  return 0;
}