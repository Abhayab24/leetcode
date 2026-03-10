#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        int sum=0;
        vector<int> res;
        while(l<r){
            sum=numbers[l]+numbers[r];
            if(sum==target){
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }
           else if(sum>target)
           r--;
           else 
           l++;
        }
    return {};
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int tar=9;
    vector<int> res;
    res=s.twoSum(nums,tar);
    for(int x:res){
    cout<<x;
    }//question

}//added something in it