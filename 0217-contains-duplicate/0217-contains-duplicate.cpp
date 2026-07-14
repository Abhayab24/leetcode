class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //  int st=0;
    //  int end=nums.size()-1;
    //  while(st<end){
    //     if(nums[st]==nums[end]){
    //         return true;
    //     }
    //     st++;
    //     end--;
    //  }
    //  return false;  
    unordered_map<int,int>mp;
    for(int i:nums){
        mp[i]++;
    }
    for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]>1){
            return true;
        }
    }
    return false;
    }
};