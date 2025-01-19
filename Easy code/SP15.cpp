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
  vector<int> v={2,34,56,2,3,32,12,45,67,134};
  bubbleSort(v,v.size());
  int max_seconde_largest=0,max_largest=0;
  for(int i=0;i<v.size();i++){
    if(max_largest<v[i]){
      max_largest=v[i];
    }
  }
  for(int i=0;i<v.size();i++){
    if(max_seconde_largest<v[i] && v[i]!=max_largest){
      max_seconde_largest=v[i];
    }
  }
  cout<<max_seconde_largest<<endl;
  return 0;
//1)	Second Largest Element in an array
