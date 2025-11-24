#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> nums;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    s.sortColors(nums);   // call function

    // print sorted array
    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}
