#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string Sum(string1, string2);

int main()
{
  string num1, num2;
  cout << "adding two large intergers /n";
  cout << "enter first interger /n";
  cin >> num1;
  cout << "enter second interger /n";
  cin >> num2;

  if (num1[length1] > num2[length2])
  {
    swap(num1, num2)
  }

  int num1, num2;
  int num1 = string1;
  int num2 = string2;
  int carry = 0;
  int k = 0;
  int i = 0;
  int j = 0;

  for (length1 = 0; num1[length1] != '/0'; length1++)
  {
    num1[length1] = num1[length1] - '0';
  }
  for (length2 = 0; num2[length2] != '/0'; lenth2++)
  {
    num2[length2] = num2[length2] - '0';
  }
  for (i >= 0 && j >= 0; i--, j--, k++)
  {
    Sum[k] = (num1[i] + num2[j] + carry) % 10;
    carry = (num1[i] + num2[j] + carry) / 10;
  }
  if (carry)
  {
    string.push_back(carry + '0');
    
  }
  cout << "result /n";
  cout << Sum[k]

  return 0;
}
