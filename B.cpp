#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution() {
  //1, 3, 6, 10, 15
    int n, count = 0;
    cin >> n;
    if (n % 15 == 12 || (n / 15 > 0 && n % 15 == 8)) {
      cout << n / 15 + 2 << endl;
      return;
    }
    else if (n / 15 > 0 && n % 15 == 5) {
      cout << n / 15 + 1 << endl;
      return;
    }
    else {
      count += n / 15;
      n %= 15;
      count += n / 10;
      n %= 10;
      count += n / 6;
      n %= 6;
      count += n / 3;
      n %= 3;
      count += n / 1;
      n %= 1;
      cout << count << endl;
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