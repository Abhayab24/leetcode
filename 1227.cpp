#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if (n == 1)
            return 1;
        else
            return 0.5;
    }
};
int main(){
    Solution sol;
    int n = 3;
    double res = sol.nthPersonGetsNthSeat(n);
    cout << res << endl;
    return 0;
}
