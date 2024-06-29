// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
#include <bits/stdc++.h> //includes all standard libraries!!
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int moves = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++) {
            moves += abs(seats[i] - students[i]);
        }
        return moves;
    }
};

int main() {
    int n, m;

    // Taking input for seats array
    cout << "Enter the number of seats: ";
    cin >> n;
    vector<int> seats(n);
    cout << "Enter the seats array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> seats[i];
    }
    vector<int> students(n);
    cout << "Enter the students array elements ("<<n<<")\n";
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }

    // Create an instance of the Solution class
    Solution solution;

    // Calling the method and printing the result
    int result = solution.minMovesToSeat(seats, students);
    cout << "Minimum moves to seat students: " << result << endl;

    return 0;
}
