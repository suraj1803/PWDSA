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

int power1(int p, int q) {
  if (q == 0)
    return 1;
  return p * power1(p, q - 1);
}


int power2(int p, int q) {
  if (q == 0)
    return 1;
  if (q % 2 == 0) {
    int result = power2(p, q/2);
    return result * result;
  } else {
    int result = power2(p, (q - 1) / 2);
    return p * result * result;
  }
}

int power3(int p, int q) {
  if (q == 0)
    return 1;
  if (q % 2 == 0) {
    int result = power3(p, q / 2);
    return result * result;
  }
  else {
    int result = power3(p, (q - 1) / 2);
    return p * result * result;
  }
}

int main()
{
  int p, q;
  cin >> p >> q;

  cout << power3(p, q) << endl;

  return 0;
}