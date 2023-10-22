class Solution {
public:
    string addBinary(string a, string b) {
        int x=a.size()-1;
        int y=b.size()-1;
        int c=0;
        string res;

        while(x>=0||y>=0||c!=0){
            if(x>=0){
                c+=a[x]-'0';
                x--;
            }
            if(y>=0){
                c+=b[y]-'0';
                y--;
            }
            res+=c%2+'0';
            c/=2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};