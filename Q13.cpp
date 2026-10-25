#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter k: ";
    cin >> k;
    long long sum = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum % k == 0) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
