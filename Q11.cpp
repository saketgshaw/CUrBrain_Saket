#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    const long long MOD = 1000000007;
    long long sum = 0, x;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum = (sum + x) % MOD;
    }
    cout << "Sum modulo MOD: " << sum << endl;
    return 0;
}
