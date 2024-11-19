#include <iostream>
using namespace std;
int find_max_index(int  arr[],int size,int max,int current){
    if(current==size){
      return max;
    }
  if(arr[current]>arr[max]){
    max=current;
  }
  return find_max_index(arr, size,max,current+1);
}
int main(){
  int size;
  cout<<"enter the size of array: ";
  cin>>size;
  int arr[size];
  cout<<"enter the array: ";
  for(int i=0;i<size;i++){
  cin>>arr[i];}
int max =find_max_index(arr,size,0,0);
  cout<<"max index is "<<max;

  return 0;
