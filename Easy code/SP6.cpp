#include <iostream>
using namespace std;

void findEvenOdd(int number, int limit) {
    if (number > limit) {
        return;
    }

    if (number % 2 == 0) {
        cout << number << " is Even" << endl;
    } else {
        cout << number << " is Odd" << endl;
    }

    findEvenOdd(number + 1, limit);
}

int main() {
    int startRange, endRange;

    cout << "Enter the start of the range: ";
    cin >> startRange;
    cout << "Enter the end of the range: ";
    cin >> endRange;

    cout << "Even and Odd numbers in the given range:" << endl;
    findEvenOdd(startRange, endRange);

    return 0;
}
