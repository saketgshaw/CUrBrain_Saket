#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }
    int result = arr[0];
    for (int i = 1 ; i < n ; i ++) {
        if (abs(arr[i]) < abs(result)) {
            result = arr[i];
        }
    }
    cout << "Minimum absolute value: " << result << endl;
    return 0;
}
