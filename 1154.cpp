class Solution {
public:
    int dayOfYear(string date) {
        int y1 = 0,m1 = 0,d1 = 0,place = 1;
        for(int i = date.size()-1; i >= 0;i--){
            if(date[i] == '-'){
                place = 1;
            }
            else if(i == 9 || i == 8){
                d1 += (date[i] - '0') * place;
                place *= 10;
            }
            else if(i == 5 || i == 6){
                m1 += (date[i] - '0') * place;
                place *= 10;
            }
            else{
                y1 += (date[i] - '0') * place;
                place *= 10;
            }
        }
        int m,d,ans = 0,j=1;
        if(y1 % 4 == 0 && (y1 % 100 != 0 || y1 % 400 == 0)){
            while(j <= m1){
                if(j == 2) m = 29;
                else if(j == 4 || j == 6 || j == 9 || j == 11) m = 30;
                else m = 31;
                if(j == m1) ans += d1;
                else ans += m;
                j++;
            }
        }
        else{
            while(j <= m1){
                if(j == 2) m = 28;
                else if(j == 4 || j == 6 || j == 9 || j == 11) m = 30;
                else m = 31;
                if(j == m1) ans += d1;
                else ans += m;
                j++;
            }
        }
        return ans;
    }
};