class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++)
    {
        //avoiding duplicates condition
        if(i==0 || nums[i]!=nums[i-1])
        {
            int s=i+1,e=nums.size()-1;
            int sum =0-nums[i];
            
            while(s < e)
            {
                if(nums[s] + nums[e] == sum)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    ans.push_back(temp);
                    

                    //avoiding duplicates 
                    while(s<e && nums[s]==nums[s+1])s++;
                    while(s<e && nums[e]==nums[e-1])e--;
                    
                    s++;
                    e--;
                   
                 }   
               else if(nums[s] + nums[e] > sum)
                    e--;
                else
                    s++;
                
             }
         }
      }
    
      return ans;
   }

};