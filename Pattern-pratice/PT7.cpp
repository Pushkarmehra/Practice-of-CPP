#include <iostream>
using namespace std;
int main(){
   int i,j;
   for(i=1;i<=5;i++){
      for(j=0;j<i;j++){
         cout<<(i+j)%2<<" ";
      }
     cout<<endl<<endl;
   }
  return 0;
}
