#include <iostream>
#include <climits>
using namespace std;
int main(){
  int arr[5]={2,4,1,8,3};
  int smallest= INT_MAX;
  int largest= INT_MIN;
  int size=5;
  for(int i=0;i<size;i++){
  //     if(arr[i]<smallest){
  //       smallest=arr[i];
  //   }
  //   if(arr[i]>largest){
  //       largest=arr[i];
  // }
      smallest=min(arr[i],smallest);
      largest=max(arr[i],largest);
  }
  cout<<"smallest number\n"<<smallest<<endl;
  cout<<"largest number\n"<<largest<<endl;
  return 0;
}
