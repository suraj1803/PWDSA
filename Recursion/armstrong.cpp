#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int armstrongNumber(int n, int& d) {
  if (n >= 0 && n <= 9) 
    return pow(n, ++d);
  d++;
  int sum = armstrongNumber(n / 10, d) + pow(n % 10, d);
  return sum;
}

int main()
{
  int n;
  cin >> n;
  int d = 0;

  if (armstrongNumber(n, d) == n)
    cout << "YES" << endl;
  else 
    cout << "NO" << endl;

  return 0;
}