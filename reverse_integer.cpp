class Solution {
public:
    int reverse(int x) {
        int r=0;
        int s=0;

        while(x!=0){
            r=x%10;
            s=s*10+r;
            x/=10;
        }
        return s;
    }
};