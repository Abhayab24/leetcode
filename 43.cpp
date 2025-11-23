#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        stringstream x;
        int mul1 =stoi(num1);
        int mul2=stoi(num2);
        int mul= mul1*mul2;
        x<<mul;
        x>>mul;
        return x.str();
    }
};//doesn't work more than 10 digits in stoi 
int main(){
    Solution S;
    string num1="123";
    string num2="456";
    string ans=S.multiply(num1,num2);
    cout<<ans;

}