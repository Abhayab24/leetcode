#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4};
        vector <int> ans;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];  
        }
        for(int i=0;i<nums.size();i++){
            prod/=i;
            ans.push_back(prod);
        }
        cout<<ans;
}