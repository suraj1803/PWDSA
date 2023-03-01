#include <iostream>
#include <vector>
using namespace std;

// Two Sum
bool twoSum(vector<int> &a, int target) {
  int i = 0;
  int j = a.size() - 1;

  while(i < j) {
    if (a[i] + a[j] == target)
      return true;
    else if (a[i] + a[j] < target)
      i++;
    else 
      j--;
  }
  return false;
}



int main()
{
  vector<int> a = {-1, 0, 1, 2, 3};
  cout << twoSum(a, 5) << endl;

  return 0;
}