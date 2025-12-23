#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1="abcd";
    string s2="abcde";
    char ans=0;
    for(char c : s1) ans^=c;
    for(char c : s2) ans^=c;
    cout<<ans<<" ";
}