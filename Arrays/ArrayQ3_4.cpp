#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a)
{
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

  for (int i = 0; i < arr.size(); i++) {
    arr[i] += arr[i - 1];
  }

  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = i; j < arr.size(); j++) {
      if (i == 0 && arr[j] % 2 != 0)
          count++;
      else if (i != 0 && (arr[j] - arr[i - 1]) % 2 != 0)
        count++;
    } 
  }
  
  cout << count << endl;

  return 0;
}