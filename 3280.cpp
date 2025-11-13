#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        string by="",bm="",bd="";
        while(year>0){
            by=char((year%2)+'0')+by;
            year/=2;
        }
        while(month>0){
            bm=char((month%2)+'0')+bm;
            month/=2;
        }
        while(day>0){
            bd=char((day%2)+'0')+bd;
            day/=2;
        }
        return by+"-"+bm+"-"+bd;
    }
};
int main(){
    string date;
    getline(cin,date);
    Solution s;
    cout<<s.convertDateToBinary(date);
    return 0;
}