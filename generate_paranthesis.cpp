class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        backtrack(ans,"",0,0,n);
        return ans;
    }
    
public:
    void backtrack(vector<string> &pr,string curr,int open,int close,int max){
        
        if(curr.size()==max*2) {
            pr.push_back(curr);
            return ;
        }
        
        if(open<max){
            backtrack(pr,curr+"(",open+1,close,max);
        }
        
        if(open>close){
            backtrack(pr,curr+")",open,close+1,max);
        }
        
    }
};