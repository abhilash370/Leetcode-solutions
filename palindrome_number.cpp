class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long r=0;

        while(temp>0){
            int l=temp%10;
            r=r*10+l;
            temp=temp/10;
        }
        return (r==x);
    }
};