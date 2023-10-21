class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> cur;
        helper(1,cur,n,k);
        return ans;
    }
public:
    vector<vector<int>> ans;   
    void helper(int id,vector<int> cur,int n, int k){
        if(cur.size()==k){
            ans.push_back(cur);
            return;
        }

        for(int i=id;i<n+1;++i){
            cur.push_back(i);
            helper(i+1,cur,n,k);
            cur.pop_back();
        }   
    }
};