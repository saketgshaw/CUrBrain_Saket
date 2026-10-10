#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int x;
    cout << "Enter element 1: ";
    cin >> x;
    int gc = x;
    for (int i = 1; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        gc = gcd(gcdAll, x);
    }
    cout << "GCD of the array: " << gc << endl;
    return 0;
}
