#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int size = nums.size();

        sort(nums.begin(), nums.end());
        for(int i = 1; i < size; i++){
            if(nums[i] == nums[i-1]) return true;
        }
        return false;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,2,3,1};
    bool res = sol.containsDuplicate(nums);
    cout << (res ? "true" : "false") << endl;
    return 0;
}
//getting a good understanding of sorting and array traversal