#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle);
        return index;
    }
};

int main() {
    string haystack, needle;

    cout << "Enter haystack string: ";
    getline(cin, haystack);

    cout << "Enter needle string: ";
    getline(cin, needle);

    Solution solution;
    int result = solution.strStr(haystack, needle);

    cout << "Index: " << result << endl;

    return 0;
}
