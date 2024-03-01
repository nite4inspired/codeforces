#include <iostream>
#include <vector>

using namespace std;

void solution() {
  int n;
  cin >> n;
  cin.ignore();
  vector<char> s(n), copy(n);
  for (int i = 0; i < n; i++) {
    cin.get(s[i]);
  }
  int ball, count;
  for (int i = 0; i < n; i++) {
    ball = i;
    count = 0;
    copy = s;
    while (ball >= 0 && ball < n) {
      if (copy[ball] == '>') {
        copy[ball] = '<';
        ball++;
      } else {
        copy[ball] = '>';
        ball--;
      }
      count++;
    }
    cout << count << ' ';
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