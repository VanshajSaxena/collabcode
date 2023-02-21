#include <iostream>
using namespace std;

int main() {
  int number, sum = 0, range;
  cout << "Input Number: ";
  cin >> range;
  for (number = 1; number <= range; number++) {
    sum = 0;
    for (int i = 1; i < number; i++) {
      if (number % i == 0) {
        sum = sum + i;
      }
    }
    if (sum == number) {
      cout << sum << " ";
    }
  }
}
