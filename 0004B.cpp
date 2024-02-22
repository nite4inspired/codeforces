#include <iostream>
#include <vector>
using namespace std;
int sumVector(const vector<int>& vec) {
    int sum = 0;
    for(int num : vec) {
        sum += num;
    }
    return sum;
}

int main(void) {
    int d, h;
    cin >> d >> h;
    vector<int> min;
    vector<int> max;
    
    int num1, num2;
    for (int i = 0; i < d; i++) {
        cin >> num1 >> num2;
        min.push_back(num1);
        max.push_back(num2);
    }
    if (h < sumVector(min) || h > sumVector(max)) {
        cout << "NO";
        return 0;
    }
    vector<int> test = min;
    int sum;
    sum = sumVector(test);
    for (int i = 0; i < test.size(); i++) {
        if (sum - min[i] + max[i] < h) {
            sum += max[i] - test[i];
            test[i] = max[i];
        }
        else {
            test[i] += h - sum;
            break;
        }

    }
    cout << "YES"<< endl;
    for (int i = 0; i < test.size(); i++) {
        cout << test[i] << " ";
    }
    return 0;
}