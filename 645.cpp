#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums ={1,2,2,4};
        unordered_map<int,int>mp;
        vector<int> store;
        for(int x:nums){
            mp[x]++;
        }
        int missing=0;
        int duplicate=0;
        for(int i=0;i<nums.size();i++){
            if(mp[i+1]<1){
               missing=i+1;
            }
            if(mp[i+1]>1){
               duplicate=i+1;
                
            }
        }
        
        store.push_back(duplicate);
        store.push_back(missing);
        for(int x:store){
            cout<<x<<" ";
        }
        //cpp question
    }