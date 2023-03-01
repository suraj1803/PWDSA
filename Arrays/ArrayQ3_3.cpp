// ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
// sequence which contains equal numbers of 0 and 1.

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
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  int maxLength = 0;
  for (int i = 0; i < arr.size(); i++) {
    int zeroes = 0, ones = 0;
    for (int k = i; k < arr.size(); k++) {
      if (arr[k] == 0) zeroes++;
      else ones++;

      if (zeroes == ones) 
        maxLength = max(maxLength, k - i + 1);
    }
  }
  cout << maxLength << endl;
  return 0;
}