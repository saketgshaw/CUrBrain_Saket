#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> digits;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0)
            digit = 0;
        digits.push_back(digit);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());
    cout << "[";
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if (i + 1 < digits.size())
            cout << ", ";
    }
    cout << "]";
    return 0;
}
