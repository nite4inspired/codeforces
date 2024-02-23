#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  string word;
  vector<string> words;

  for (int i = 0; i < n; i++) {
    cin >> word;
    if (word.size() > 10) {
      words.push_back(word.front() + to_string(word.size() - 2) + word.back());
    } else {
      words.push_back(word);
    }

  }
  for (int i = 0; i < words.size(); i++) {
    cout << words[i] << endl;
  }
}