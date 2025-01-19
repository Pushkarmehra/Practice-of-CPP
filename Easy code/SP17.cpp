#include <iostream>
using namespace std;
int binarySearch(int array[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;

    if (array[mid] == target) {
        return mid;
    } else if (array[mid] < target) {
        return binarySearch(array, mid + 1, high, target);
    } else {
        return binarySearch(array, low, mid - 1, target);
    }
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(array, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
