#include <iostream>

using namespace std;

int sumOfDigit(int n){
  static int sum = 0;
  if(n == 0){
    return sum;
  } else {
    sum += n % 10;
    return sumOfDigit(n / 10);
  }
}

int main(){
  int n;
  cout << "Enter the number : ";
  cin >> n;
  cout << "The sum of digit " << n << " is " << sumOfDigit(n) << endl;
  return 0;
}
