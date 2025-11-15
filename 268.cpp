#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
int missingNumber(vector<int> &nums){
    
    int n=nums.size();
    int sum=n*(n+1)/2;
    int s=0;
    for(int x:nums){
        s+=x;
    }
    return sum-s;
}
};
int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    int mis_num=s.missingNumber(nums);
    cout<<mis_num;

}