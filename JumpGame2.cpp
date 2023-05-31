class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=nums[0];
        int far=nums[0];
        int count=1;

        if(nums.size()==1) return 0;

        for(int i=1;i<nums.size();++i){
            if(i>curr){
                count++;
                curr=far;
            }
            far=max(far,i+nums[i]);
        }
        return count;
    }
};