// #include <iostream>
// #include <string>
// #include <cstdio>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compareFrac(string str) {
        int num1, den1, num2, den2;
        sscanf(str.c_str(), "%d/%d, %d/%d", &num1, &den1, &num2, &den2);
        double val1 = static_cast<double>(num1) / den1;
        double val2 = static_cast<double>(num2) / den2;
        if (val1 == val2) return "equal";
        return val1 > val2 ? to_string(num1) + "/" + to_string(den1) : to_string(num2) + "/" + to_string(den2);
    }
};

int main() {
    string input;
    cout << "Enter two fractions separated by a comma (e.g., 1/2, 3/4): ";
    getline(cin, input);

    Solution solution;
    string result = solution.compareFrac(input);

    cout << "The result is: " << result << endl;

    return 0;
}
