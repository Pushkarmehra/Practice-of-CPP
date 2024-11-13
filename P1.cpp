/* Program to find Fibonacci numbers */
#include <iostream>
using namespace std;
int main(){
  int n1,n2,n3,n,i;
    n1=0;
    n2=1;
    n3=0;
    n=20;
    cout<<n1<<endl<<n2<<endl;
  for(i=2;i<=n;i++){
      n3=n1+n2;
    cout<<(n3)<<endl;
      n1=n2;
      n2=n3;

  }
  return 0;
}
/* Logic building can be understood using the example of a Fibonacci sequence.
In a list of Fibonacci numbers, such as {0, 1, 1, 2, 3, 5, 8, 13 -------}, the first two numbers are constants:
0 and 1. Let's call them n1 and n2. Each subsequent number, n3, is the sum of the two previous numbers.So, for the first calculation,
n3=n1+n2, with n1=0 and n2=1. The result is n3=1. For the next calculation, n1=1 and n2=1, giving n3=2. For the third calculation,
n1=1 and n2=2, so n3=3, and so on.
In each step, we update the values by setting 
n1=n2 and n2=n3.
*/
