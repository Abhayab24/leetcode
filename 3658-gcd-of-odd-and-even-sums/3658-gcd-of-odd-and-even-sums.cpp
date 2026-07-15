class Solution {
public:
    int gcdOfOddEvenSums(int n) {
      int sumOdd=0;
      int sumEven=0;
      int o=1;
      int e=2;
      while(n!=0){
        sumOdd+=o+2;
        sumEven+=e+2;
        n--;
      }  
      int res;
      res=__gcd(sumOdd,sumEven);
      return res;
    }
};