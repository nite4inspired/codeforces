#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 3 == 0) {
        cout << 0 << endl;
        return;
    }
    if (sum %3 == 2) {
        cout << 1 << endl;
        return;
    }
    if (sum % 3 == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 3 == 1) {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
        return;
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}