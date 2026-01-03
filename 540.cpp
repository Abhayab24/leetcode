#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector <int> nums ={1,1,2,3,3,4,4,8,8};
    cout<<s.singleNonDuplicate(nums);
}