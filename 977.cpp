#include <bits/stdc++.h>
using namespace std;
int main(){
        vector<int> nums={-4,-1,0,3,10};
        vector<int> store;
     for(int i=0;i<nums.size();i++){
        store.push_back(nums[i]*nums[i]);
     }
    sort(store.begin(),store.end());
    for(int i=0;i<nums.size();i++)
    cout<<store[i]<<" ";

}