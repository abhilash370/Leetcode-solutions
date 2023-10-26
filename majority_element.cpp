class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int x=0;

        for(auto i:nums){
            if(count==0){
                x=i;
            }
            if(i==x) count++;
            else count--;
        }
        return x;
    }
};