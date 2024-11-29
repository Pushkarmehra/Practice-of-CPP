#include <iostream>
using namespace std;
int factor(int n){
  int i;
  static int fact=1;
  if(n<=1){
    return fact;
  }
  fact=fact*n;
  return factor(n-1);
}

int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "The factorial of " << n << " is " << factor(n) << std::endl;
  return 0;
}
