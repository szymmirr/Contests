#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        int measurements;
        cin >> measurements;
        int speed [measurements] = {};
        for (int j = 0; j < measurements; j++) {
            cin >> speed[j];
        }
        int sum, min = 10001, max = -10001;
        for (int k = 0; k < pow(2, measurements - 1); k++) {
            sum = speed[0];
            int bitsetSize = pow(2, measurements - 1);
            string operations = std::bitset<32>(k).to_string();
            operations.erase(0,32-measurements+1);
            for (int j = 0; j < measurements - 1; j++) {
                if (operations[j] == '1') {
                    sum += speed[j + 1];
                } else {
                    sum -= speed[j + 1];
                }
            }
            if (abs(sum) > max) {
                max = abs(sum);
            }
            if (abs(sum) < min) {
                min = abs(sum);
            }
        }
        cout << min << " " << max << "\n";
    }
}
