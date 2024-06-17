#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long i = 0, k = sqrt(c);
        while (i <= k) {
            if ((i * i) + (k * k) == c)
                return true;
            else if ((i * i) + (k * k) > c)
                k--;
            else
                i++;
        }
        return false;
    }
};

int main() {
    int c;
    cout << "\nEnter an integer to check whether it can be expressed as the sum of squares of two integers: ";
    cin >> c;

    Solution solution;
    bool result = solution.judgeSquareSum(c);

    if (result) {
        cout << "\n" << c << " can be expressed as the sum of squares of two integers.\n" << endl;
    } else {
        cout << "\n" << c << " cannot be expressed as the sum of squares of two integers.\n" << endl;
    }

    return 0;
}
