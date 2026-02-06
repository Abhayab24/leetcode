#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxDivide(int a ,int b){
        while(a%b==0){
            a/=b;
        }
        return a;
    }
    bool isUgly(int n){
        if(n<=0) return false;
        n=maxDivide(n,2);
        n=maxDivide(n,3);
        n=maxDivide(n,5);
        return (n==1)?1:0;
    }
};
int main(){//hello
    Solution s;
    int n;
    cin>>n;
    cout<<s.isUgly(n);
    return 0;
}
