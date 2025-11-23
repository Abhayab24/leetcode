#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int sumOfUnique(vector<int>& nums) {
    int freq[101]={};
    for(int x:nums){
        freq[x]++;
    }
    int sum=0;
    for(int i=0;i<101;i++){
        if(freq[i]==1){
            sum+=i;
        }
    }
    return sum;
    
        
    }
};
int main() {
Solution S;
vector<int> nums={1,2,3,2,5};
int ans=S.sumOfUnique(nums);
cout<<ans;
}
