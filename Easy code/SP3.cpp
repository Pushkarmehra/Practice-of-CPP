#include <iostream>
using namespace std;
void PandS(int arr[],int SizeofArr,int& sum,int& product){
  sum=0;product=1;
   for(int i=0;i<SizeofArr;i++){
     sum+=arr[i];
     product*=arr[i];
   }
}
int main(){
    int arr[]={1,2,3,4,5};
    int sum,product;
    int SizeofArr=sizeof(arr)/sizeof(int);
  PandS(arr,SizeofArr,sum,product);
    cout<<"product of array is "<<product<<endl;
    cout<<"sum of array is "<<sum<<endl;
  return 0;
}
