#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t;
    cin >> t;
    vector<vector<string>> answers(t);
    int n, q, l, r, sum;
    for (int i = 0; i < t; i++) {
        cin >> n >> q;
        vector<int> entry(n + 1, 0);
        vector<string> answer(q);
        for (int j = 1; j <= n; j++) {
            cin >> entry[j];
            if (entry[j] == 1) entry[j]--;
            entry[j] += entry[j - 1];
        }
        
        for (int j = 0; j < q; j++) {
            cin >> l >> r;
            if (l == r) {
                answer[j] = "NO";
                continue;
            } 

            sum = entry[r] - entry[l - 1];
            if (sum >= r - l + 1) answer[j] = "YES";
            else answer[j] = "NO";
        }
        answers[i] = answer;
    }
    for (int i = 0; i < answers.size(); i++) {
        for (int j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << endl;
        }
    }
}