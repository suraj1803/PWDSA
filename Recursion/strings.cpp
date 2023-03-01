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


string removea(string &str, int s, int e) {
  if (s == e)
    return "";
  string curr = "";
  curr += str[s];
  return (str[s] == 'a' ? "" : curr) + removea(str, s + 1, e) ;
}


bool checkPalindromeString(string &str, int s, int e) {
  if (s == e || s == e - 1)
    return str[s] == str[e];
  return str[s] == str[e] && checkPalindromeString(str, s + 1, e - 1);
}


bool checkPalindromeNum(int num, int &temp) {
  if (num >= 0 and num <= 9) {
    int lastDigit = temp % 10;
    temp /= 10; 
    return lastDigit == num;
  }

  bool result = checkPalindromeNum(num / 10, temp) and num % 10 == temp % 10;
  temp /= 10;
  return result;
}


int main()
{
  int num;
  cin >> num;
  int another = num;
  cout << checkPalindromeNum(num, another) << endl;
  return 0;
}