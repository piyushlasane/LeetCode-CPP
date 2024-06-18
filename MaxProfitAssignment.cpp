#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin(), worker.end());
        int n = profit.size();
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        int ans = 0, mx = 0, i = 0;
        for (int w : worker) {
            while (i < n && jobs[i].first <= w) {
                mx = max(mx, jobs[i++].second);
            }
            ans += mx;
        }
        return ans;
    }
};

int main() {
    int n, m;
    cout << "Enter the number of jobs: ";
    cin >> n;
    cout << "Enter the number of workers: ";
    cin >> m;

    vector<int> difficulty(n);
    vector<int> profit(n);
    vector<int> worker(m);

    cout << "Enter the difficulties of the jobs: ";
    for (int i = 0; i < n; ++i) {
        cin >> difficulty[i];
    }

    cout << "Enter the profits of the jobs: ";
    for (int i = 0; i < n; ++i) {
        cin >> profit[i];
    }

    cout << "Enter the capabilities of the workers: ";
    for (int i = 0; i < m; ++i) {
        cin >> worker[i];
    }

    Solution solution;
    int result = solution.maxProfitAssignment(difficulty, profit, worker);
    cout << "Maximum profit that can be achieved: " << result << endl;

    return 0;
}
