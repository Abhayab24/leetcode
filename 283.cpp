#include <bits/stdc++.h>
using namespace std;
int main(){
        int nums[5]={0,1,0,3,12};
        int j=0;
        for(int i=0;i<5;i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
        for(int i=0;i<5;i++){
            cout<<nums[i]<<" ";
        }
    }

    //somethihng new going to add in this
    