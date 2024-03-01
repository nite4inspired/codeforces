#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution() {
  int n;
  cin >> n;
  cin.ignore();
  string s;
  getline(cin, s);
  vector<int> l(0), r(0);
  l.push_back(-1);
  r.push_back(-1);
  for (int i = 0; i < n; i++) {
    if (s[i] == '>') l.push_back(i);
    else r.push_back(i);
  }
  l.push_back(n);
  r.push_back(n);
  for (int i = 0; i < n; i++) {
    int count = 0;
    if (s[i] == '>') {
      auto it = lower_bound(r.begin(), r.end(), i + 1);
      int rIndex = it - r.begin();
      it = upper_bound(l.begin(), l.end(), i - 1);
      int lIndex = it - r.begin();
      count += r[rIndex] - i + r[rIndex] - l[lIndex];

    } else {

    }
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