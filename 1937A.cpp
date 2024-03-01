#include <iostream>
using namespace std;

void solution() {
  int n;
  int p = 1;
  cin >> n;
  while (p * 2 <= n) {
      p *= 2;
  }
  cout << p << endl;
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