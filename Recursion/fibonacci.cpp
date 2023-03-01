#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int num) {
  if (num == 1 || num == 0)
    return num;

  int result = fibonacci(num - 1) + fibonacci(num - 2);
  return result;
}


int main() {

  return 0;
}