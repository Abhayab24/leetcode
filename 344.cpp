#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};

int main() {
    Solution S;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    S.reverseString(s);   // reverse the array

    // print reversed vector
    for (char c : s) {
        cout << c<<" ";
    }
}
