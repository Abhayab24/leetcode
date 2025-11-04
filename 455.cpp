#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i=0;
    int j=0;
    while(i<g.size() && j<s.size())
    {
        if(s[j]>=g[i])
        {
            i=i+1;
            

        }
        j++;
    }
        return i;
    }
};
int main(){
    vector<int> g={1,2};
    vector<int> s={1,2,3};
     Solution obj;
    cout << obj.findContentChildren(g, s) << endl; // ✅ Output: 2

    return 0;//getting comment
}