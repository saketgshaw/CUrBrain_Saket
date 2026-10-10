#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int s = n + 1;
    while (!isPrime(s)) {
        s++;
    }
    cout << "Next prime: " << s << endl;
    return 0;
}
