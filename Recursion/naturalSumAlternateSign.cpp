#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n) {
  if (n == 1)
    return 1;
  return sum(n - 1) + ((n % 2 == 0) ? (-n) : n);
}

int main()
{
  int n;
  cin >> n;

  cout << sum(n) << endl;

  return 0;
}