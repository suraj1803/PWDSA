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

int sum(int num) {
  if (num == 0 || num < 10)
    return num;
  return num % 10 + sum(num / 10);
}

int main()
{
  int num;
  cin >> num;

  cout << sum(num) << endl;

  return 0;
}