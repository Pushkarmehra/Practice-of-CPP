#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a;
    cin>>b;
    int len=a.size();
    int len2=b.size();
    cout<<len<<" "<<len2<<endl;
    cout<<a+b<<endl;
  cout<<b[0];
  for(int i=1;i<=(len-1);i++){
    cout<<a[i];
  }
  cout<<" "<<a[0];
  for(int i=1;i<=(len2-1);i++){
    cout<<b[i];
  }
    return 0;
}
/*output
42
abcdef
abcd ef
ebcd af
if input
abcd
ef
*/
