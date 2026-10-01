#include <bits/stdc++.h>
using namespace std;
long long solve(long long n) {
    if (n < 0) {
        return n + reverseNumber(n);
    }
    long long original = n;
    long long reversed = reverseNumber(n);
    if (original == reversed) return original;
    return original + reversed;
}
long long reverseNumber(long long n) {
    long long rev = 0;
    while (n != 0) {
        long long digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}
int main() {
    long long n;
    cout<<"Enter your number: ";
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
