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
/* logic building is like if i take list of fibonacci number so there list is 
{0,1,1,2,3,5,8,13} this the list so first two are constant 0,1 so name them n1,n2
n3 is sum of its previce two numbers so (n3=n1+n2)for first n3=1 and n1=0 and n2=1
for second n3=2 and n1=1and n2=1 and for third n3=3 and n1=1 and n2=2 so on comparing 
n1=n2 and n2=n3*/
