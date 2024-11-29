#include <iostream>

using namespace std;

int sumOfOdd(int n){
  static int sum = 0;
  if(n == 0){
    return sum;
  }
  if(n % 2 != 0){
    sum += (n * n);
    return sumOfOdd(n - 1);
  } else {
    return sumOfOdd(n - 1);
  }
}

int main(){
  int n;
  cout << "Enter the range of the number : ";
  cin >> n;
  cout << "The sum of range 1 to " << n << " is " << sumOfOdd(n) << endl;
  return 0;
}
