#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, threshold;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> sales(n);

    cout << "Enter sales values: ";
    for (int i = 0; i < n; i++) {
        cin >> sales[i];
    }

    cout << "Enter threshold: ";
    cin >> threshold;

    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            result.push_back(sales[i]);
        }
    }

    cout << "Filtered array: [";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}
