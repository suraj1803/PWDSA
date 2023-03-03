#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(int n, int k) {
  if (k < 1)
    return;
  print(n, k - 1);
  cout << n * k << " ";
}

int main()
{
  int n, k;
  cin >> n >> k;
  print(n, k);

  return 0;
}