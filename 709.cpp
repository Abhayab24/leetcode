#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
        
    }
};
int main(){
    Solution s; 
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string answer=s.toLower(str);
    cout<<"Lowercase string is: "<<answer;
}