#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int s;
        int mx;
        vector<int> missing ;

        for(int i=1;i<nums.size();i++){
            s=nums[i-1];
            mx=nums[i];

        
        for(int j=s+1;j<mx;j++)
        {
            missing.push_back(j);
        }
    
    }
       return missing; 
    }
};
int main()
{
     vector<int> nums = {5,1,9};
    Solution obj;
    vector<int> ans = obj.findMissingElements(nums);

    for(int x : ans) cout << x << " ";
    
    return 0;
}