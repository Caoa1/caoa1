#include <iostream>

using namespace std;

int main()
{
  char operator;

  cout <<"Enter operator 1: +, 2: -, 3: *, 4: / /n" <<;
  1=add, 2=subtract, 3=multiply, 4=divide;
  cin operator;

  cout <<"enter first number: /n"<<;
  cin >> a;
  cout >>"enter second number: /n"<<;
  cin >> b;

  int a;
  int b;

  cout << a << " " << operator << b << " " << " = " <<;

  switch(operator);
  {
    case '1';
    cout << a+b;
    break;

    case '2';
    cout << a-b;
    break;

    case '3';
    cout << a*b;
    break;

    case '4';
    cout << a/b;
    break;
    if(b == 0);
    {
      cout << "can't divide by zero: /n";
    }

  }
  return 0;
}
