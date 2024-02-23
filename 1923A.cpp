#include <iostream>
#include <vector>

using namespace std;


int main(void) {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t, n, first, last;
    cin >> t;
    vector<int> answers(t);
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> a(n);
        first = -1;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            if (a[j] == 1) {
                first = j;
                break;
            }
        }
        if (first == -1) {
            answers[i] = 0;
            continue;
        }
        for (int j = a.size() - 1; j >= 0; j--) {
            if (a[j] == 1) {
                last = j;
                break;
            }
        }
        int count = 0;
        for (int j = first; j <= last; j++) {
            if (a[j] == 0) count++;
        }
        answers[i] = count;
    }
    for (int i = 0; i < t; i++) {
        cout << answers[i] << endl;
    }
    
}