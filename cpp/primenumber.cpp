#include <iostream>
using namespace std;
int main() {
  int number, i = 2;
  cout << "Input Numbere: ";
  cin >> number;
  for (i = 2; i < number; i++) {
    if (number % i == 0)
      break;
  }
  if (i == number)
    cout << "Prime Number ";
  else
    cout << "Non-Prime Number ";
}
