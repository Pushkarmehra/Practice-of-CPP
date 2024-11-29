#include <iostream>

using namespace std;

int primeOrNot(int n, int i) {
  int val = 0;
  if (i <= 1) {
    return val;
  }
  if (n % i == 0 && i != n) {
    val = 1;
    return val;
  } else {
    return primeOrNot(n, i + 1);
  }
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (primeOrNot(n, 2) == 0) {
    cout << "The number is prime\n";
  } else {
    cout << "The number is not prime\n";
  }
  return 0;
}
