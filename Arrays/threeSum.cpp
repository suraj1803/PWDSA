#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(vector<int> &a)
{
  for (int i = 0; i < a.size(); i++)
    cout << "a[i]"
         << " ";
  cout << endl;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int target;
  cin >> target;

  sort(arr.begin(), arr.end());

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    int l = i + 1;
    int r = n - 1;

    int targetSum = target - arr[i];

    while (l < r)
    {
      int currentSum = arr[l] + arr[r];
      if (currentSum == targetSum)
      {
        count++;
        l++;
        r--;
      }
      else if (currentSum > targetSum)
      {
        r--;
      }
      else
      {
        l = (arr[l] == arr[l + 1]) ? l + 2 : l + 1;
      }
    }
  }
  cout << count << endl;

  return 0;
}