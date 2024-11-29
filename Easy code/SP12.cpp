#include <iostream>

using namespace std;

int palindromeOrNot(int n){
  static int n2 = 0, rem = 0;
  if(n != 0){
    rem = n % 10;
    n2 = n2 * 10 + rem;
    return palindromeOrNot(n / 10);
  } else {
    return n2;
  }
}

int main(){
  int n;
  cout << "Enter the number : ";
  cin >> n;
  if(palindromeOrNot(n) == n){
    cout << "The " << n << " is palindrome \n";
  } else {
    cout << "The " << n << " is not palindrome \n";
  }
  return 0;
}
