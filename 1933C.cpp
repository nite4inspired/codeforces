#include <bits/stdc++.h>
using namespace std;

void solution() {
    int l, a, b, num, x = 0, y = 0, sum = 0;
    cin >> a >> b >> l;
    num = l;
    while (num % a == 0) {
        x++;
        num /= a;
    }
    if (a == b) {
        cout << x + 1 << endl;
        return;
    }
    
    int mi = min (a, b);
    int ma = max (a, b);

    while (ma % mi == 0) {
        ma /= mi;
    }
    if (mi % ma == 0) {
        
        x = 0;
        num = l;
        
        while (num % mi == 0) {
            x++;
            num /= mi;
        }
        cout << x + 1 << endl;
        return;
    }
    for (int i = 0; i <= x; i++) {
        num = l / ((int) pow(a, i));
        y = 0;
        while (num % b == 0) {
            y++;
            num /= b;
        }

        sum += y + 1;
        
    }
    
    cout << sum << endl;
    return;
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

