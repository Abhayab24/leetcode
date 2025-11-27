#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        int bit=0;
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
            bit^=nums[i];
        }
        return bit;
    }
};
int main(){
    Solution s;
    int n,start;
    cin>>n>>start;
    cout<<s.xorOperation(n,start);
}