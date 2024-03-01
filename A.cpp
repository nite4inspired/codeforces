#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << 2*(a[n - 1] +a[n-2] - a[1] - a[0])<< endl;
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