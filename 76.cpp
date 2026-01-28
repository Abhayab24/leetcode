#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t) {
    unordered_map<char,int> mp;
    for(char c : t) mp[c]++;

    int i = 0, count = t.length();
    int minLen = INT_MAX, start = 0;

    for(int j = 0; j < s.length(); j++) {
        if(mp[s[j]] > 0) count--;
        mp[s[j]]--;

        while(count == 0) {
            if(j - i + 1 < minLen) {
                minLen = j - i + 1;
                start = i;
            }

            mp[s[i]]++;
            if(mp[s[i]] > 0) count++;
            i++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
