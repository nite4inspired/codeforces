#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += abs(a);
    }
    cout << sum << endl;
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