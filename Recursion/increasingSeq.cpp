// input - 4 output - 1 2 3 4
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(int n) {
  if (n < 1) {
    return;
  }
  print(n - 1);
  cout << n << " ";
}

int main()
{
  int n;
  cin >> n;

  print(n);
  return 0;
}