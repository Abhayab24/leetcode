#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int freq=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    freq++;
                }
            }
            if(freq>n/2){
                return nums[i];
            }
        }
       return -1;
    }
   
};
int main(){
    Solution s; //comment
    int n;
    cout<<"Enter size of array: ";//comment
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int answer=s.majorityElement(nums);
    cout<<"Majority Element is: "<<answer;
    
}