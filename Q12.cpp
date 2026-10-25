#include <bits/stdc++.h>
using namespace std;
int main() {
    long long b, p, MOD;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter power: ";
    cin >> p;
    cout << "Enter MOD: ";
    cin >> MOD;
    long long result = 1 % MOD;
    long long i = 0;
    while (i < p) {
        result = (result * (b % MOD)) % MOD;
        i++;
    }
    cout << "Result: " << result << endl;
    return 0;
}
