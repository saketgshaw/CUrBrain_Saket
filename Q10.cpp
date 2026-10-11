#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n <= 2) {
        cout << "Count of primes: 0" << endl;
        return 0;
    }
    vector<bool> isprime(n, true);
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i * i < n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j < n; j += i) {
                isprime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isprime[i]) {
            count++;
        }
    }
    cout << "Count of primes: " << count << endl;
    return 0;
}
