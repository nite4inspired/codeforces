#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), x(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i] < 0) x[i] *= -1;
    }
    int l = 0, r = n - 1;
    int m;
    while (l <= r) {
        m = max(x[l], x[r]);
        if (sum / k > m || (sum / k == m && sum % k != 0)) {
            cout << "NO" << endl;
            return;
        }
        if (x[l] == m) {
            sum -= a[l];
            l++;
        }
        if (x[r] == m) {
            sum -= a[r];
            r--;
        }
    }
    cout << "YES" << endl;
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solution();
    }
    return 0;
}