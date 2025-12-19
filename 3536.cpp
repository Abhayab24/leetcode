#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=437;
    int pro;
    int maxpro=0;
    while(n!=0){
        int dig1=n%10;
        int temp=n/10;
        while(temp>0){
            int dig2=temp%10;
            int pro=dig1*dig2;
            if(pro>maxpro){
                maxpro=pro;
            }
            temp/=10;
        }
        n/=10;
    }
    cout<<maxpro;
}