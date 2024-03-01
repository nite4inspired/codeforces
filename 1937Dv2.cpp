#include <iostream>
#include <vector>

using namespace std;

void solution() {
  int n;
  cin >> n;
  cin.ignore();
  string s;
  getline(cin, s);
  vector<char> copy(n);
  int rStart = 0;
  vector<int> count(n, 0), starts(n, 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == '>') {
      for (int j = rStart; j <= i; j++) {
        count[j]++;
      }
      starts[i] = i;
    } else {
      count[rStart] += i + 1;
      for (int j = rStart + 1; j <= i; j++) {
        count[j] += 2 * (i - starts[j - 1]) + 1;
      }
      rStart++;
      for (int j = i; j >= rStart; j--) {
        starts[j] = starts[j - 1];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << count[i] << ' ';
  }
  cout << endl;

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