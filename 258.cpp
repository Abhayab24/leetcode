#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int addDigit(int num){
        while(num>=10){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            num=sum;

        }
        return num;
    }
};
int main(){
    solution s;
    int num;
    cout<<"Your Number: ";
    cin>>num;
    int answer=s.addDigit(num);
    cout<<answer;

}