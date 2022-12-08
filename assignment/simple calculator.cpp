# include <iostream>
using namespace std;

int main() {

  char op;
  int a, b;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> a >> b;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      cout << "Error! ";
      break;
  }

  return 0;
}