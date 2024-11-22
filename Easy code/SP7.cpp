#include <iostream>
using namespace std;
void OddandEven(int range){
  if(range==0){
    cout<<"not even or odd"<<endl;
    return 0;
  }
  else if(range%2==0){
    cout<<range<<"is even"<<endl;
    return OddandEven(range-1);
  }
  else{
    cout<<range<<"is odd"<<endl;
    return OddandEven(range-1);
  }
}
int main(){
  int range;
  cout<<"enter the number that you want find the range number is Odd or Even ";
  cin>>range;
  OddandEven(range);
  return 0;
}
