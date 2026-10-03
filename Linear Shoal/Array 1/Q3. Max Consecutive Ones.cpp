class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,ans=0; ans+=(nums[0]==1);
        for(int i=1;i<nums.size();i++)
        {
            mx=max(mx,ans);
            ans+=(nums[i]==1);
            if(nums[i]==0)ans=0;
            mx=max(mx,ans);
        }
        return max(ans,mx);
    }
};