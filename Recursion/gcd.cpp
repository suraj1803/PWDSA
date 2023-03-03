#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
  if (b > a) return gcd(b, a);
  if (b == 0) return a;
  return gcd(b , a % b);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;

  return 0;
}