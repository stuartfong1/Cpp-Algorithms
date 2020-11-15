class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0], sum = 0;

    for(int a = 0; a < nums.size(); ++a)
    {
        sum = max(nums[a], sum + nums[a]);
        best = max(best, sum);
    }

    return best;
    }
};
