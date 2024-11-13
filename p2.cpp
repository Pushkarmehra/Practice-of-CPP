#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    int num;
    char comma;
    vector<int> integers;
    while (ss >> num) {
        integers.push_back(num);
        ss >> comma;
    }
    return integers;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
/
