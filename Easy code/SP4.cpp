/* Write a C++ program to find the nth term of the Fibonacci series using recursion*/
#include <iostream>
using namespace std;
int fibonacci(int n){
  if(n<=1){
    return n;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
  cout<<fibonacci(i);}
return 0;
}
