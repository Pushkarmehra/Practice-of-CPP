// WAP to print whether the number is even or odd using goto
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){
       goto even;
    }
   else{
      goto odd;
   }
   even:
   cout<<"The number is even";
   goto end;
   odd:
   cout<<"The number is odd";
   goto end;
   end:
  return 0;
}
