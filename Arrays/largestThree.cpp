#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print(vector<int> &a) {
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
}

int main()
{
  vector<int> arr = {4, 3, 1, 9, 9};
  int first , second, third;
  first = second = third = INT_MIN;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    } 
    else if (arr[i] > second && arr[i] != first) {
      third = second;
      second = arr[i];
    } 
    else if (arr[i] > third && arr[i] != second) {
      third = arr[i];
    }
  }

  cout << first << " "<< second << " " << third;

  return 0;
}