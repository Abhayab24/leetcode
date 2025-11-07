#include <bits/stdc++.h>
using namespace std;
class solution{
string converToBase7(int num){
    if(num<0) return "0";
    bool neg=num<0;

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";  // base case for 0
        bool neg = num < 0;
        if (neg) num = -num;

        string res = "";
        while (num > 0) {
            int rem = num % 7;
            res = to_string(rem) + res;
            num /= 7;
        }

        if (neg) res = "-" + res;
        return res;
    }
};

int main() {
    int num;
    cin >> num;

    Solution s;
    cout << s.convertToBase7(num);
}

    if(neg) num=-num;
    string res="";
    while(num>0){
        int rem=num%7;
        res=to_string(rem)+res;
        num/=7;
    }
    if(neg) res="-"+res;
    return res;

}
};

int main()
{
    int num;
    cin>>num;
    cout<<convertToBase7(202);
}