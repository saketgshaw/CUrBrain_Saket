#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int a, b;
    cin >> n >> a >> b;
    int A = 0;
    int B = 0;
    if (n == 0) {
        if (a == 0) A++;
        if (b == 0) B++;
    } else {
        while (n > 0) {
            int digit = n % 10;
            if (digit == a) A++;
            if (digit == b) B++;
            n /= 10;
        }
    }
    cout << abs(A - B) << endl;
    return 0;
}
