#include <iostream>
#include <climits>
using namespace std;
int main(){
  int arr[5]={2,4,1,8,3};
  int min= INT_MAX;
  int max= INT_MIN;
  int size=5;
  for(int i=0;i<size;i++){
      if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
  }
  }
  cout<<"smallest number\n"<<min<<endl;
  cout<<"largest number\n"<<max<<endl;
  return 0;
}
