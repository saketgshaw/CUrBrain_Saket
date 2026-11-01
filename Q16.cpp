#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter scores: ";
    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }
    int first = -1 , second = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second) {
            second = arr[i];
        }
    }
    cout << "Silver medal goes to: " << second << endl;

    return 0;
}
```
