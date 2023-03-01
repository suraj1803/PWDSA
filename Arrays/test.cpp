#include <iostream>
#include <vector>
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

  for (int i = 1; i < n; i++)
  {
    arr[i] += arr[i - 1];
  }

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (i == 0 && arr[j] % 2 != 0)
      {
        count++;
      }
      else if ((arr[j] - arr[i - 1] && i != 0) % 2 != 0)
      {
        count++;
      }
    }
  }
  cout << count;
  
  return 0;
}