#include <iostream>
#include <vector>
using namespace std;

void solution() {
  int n;
  cin >> n;
  cin.ignore();
  vector<int> a1(n);
  vector<int> a2(n);
  char ch;
  for (int i = 0; i < n; i++) {
    cin.get(ch);
    a1[i] = ch - '0';
  }
  cin.ignore();
  for (int i = 0; i < n; i++) {
    cin.get(ch);
    a2[i] = ch - '0';
  }
  int start = 0, end = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a2[i] < a1[i+1]) {
      break;
    }
    else if (a2[i] == a1[i+1]) {
      end++;
    }
    else {
      end++;
      start = end;
    }
  }
  for (int i = 0; i <= start; i++) {
    cout << a1[i];
  }
  for (int i = start; i < n; i++) {
    cout << a2[i];
  }
  cout << endl;
  cout << end - start + 1 << endl;
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