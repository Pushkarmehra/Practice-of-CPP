#include <iostream>
using namespace std;
int firstDigit(int n) {
    if (n < 10) 
        return n; 
    return firstDigit(n / 10); 
}
int lastDigit(int n) {
    return n % 10;
}
void checkPalindrome(int n) {
    int firstn = firstDigit(n);
    int lastn = lastDigit(n);

    if (firstn == lastn)
        cout << "The number is a palindrome (based on first and last digits only)." << endl;
    else
        cout << "The number is not a palindrome (based on first and last digits only)." << endl;
}

int main() {
    int n;
    cout << "Enter the number you want to check if it is a palindrome or not: ";
    cin >> n;

    checkPalindrome(n);
    return 0;
}
