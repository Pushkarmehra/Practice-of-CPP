#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
  vector<int> v={2,34,56,56,3,32,12,67,67,134};
  int max[3]={v[0],v[0],v[0]};
  bubbleSort(v,v.size());
  for(int i=0;i<v.size();i++){
    if(max[0]<v[i]){
      max[0]=v[i];
    }
  }
  for(int i=0;i<v.size();i++){
    if(max[1]<v[i] && max[0]!=v[i]){
      max[1]=v[i];
    }
  }
  for(int i=0;i<v.size();i++){
    if(max[2]<v[i] && max[1]!=v[i] && max[0]!=v[i]){
      max[2]=v[i];
    }
  }
  for(int i=0;i<3;i++){
    cout<<max[i]<<" ";
  }
  return 0;
}
//2)	Largest three distinct elements in an array
