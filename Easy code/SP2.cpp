#include <iostream>
#include <iostream>
#include <climits>
using namespace std;
int main(){
int arr[]={4,7,9,1,5};
int index,index2,size=5,i;
int temp=INT_MAX;
int temp2=INT_MIN;
for(i=0;i<size;i++){
  if(arr[i]<temp){
    temp=arr[i];
    index=i;
  }
     if(arr[i]>temp2){
        temp2=arr[i];
        index2=i;
      }
}
  cout<<"index in which smallest number is\n"<<index<<endl;
  cout<<"index in which largest number is\n"<<index2<<endl;
  return 0;
}
