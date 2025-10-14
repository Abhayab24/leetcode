#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            int n=nums.size();
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    return false;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=i+2;j<n;j++)
                {
                    if(nums[i]==nums[j] && nums[i]!=nums[i+1])
                    {
                        return false;
                    }
                }
            }
            return true;
		}
};

int main() {
    Solution obj;
    vector<int> nums = {1, 1, 2, 2, 3};
    cout << obj.isSorted(nums);
    return 0;
}