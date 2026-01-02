#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (i + 1 < size && nums[i] == nums[i + 1]) return nums[i];
            if (i + 2 < size && nums[i] == nums[i + 2]) return nums[i];
            if (i + 3 < size && nums[i] == nums[i + 3]) return nums[i];
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector <int> nums={2,1,2,5,3,2};
    cout<<s.repeatedNTimes(nums);
}