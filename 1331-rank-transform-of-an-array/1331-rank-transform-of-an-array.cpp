class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res=arr;
        unordered_map<int,int>mp;
        sort(res.begin(),res.end());
        int k=0;
        for(int i=0;i<res.size();i++){
            if(mp[res[i]]==0){
            mp[res[i]]=k+1;
            k++;
            }
        
        }
        vector<int>temp;
        for(int i=0;i<arr.size();i++){
            temp.push_back(mp[arr[i]]);
        }
        return temp;
    }
};