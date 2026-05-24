class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i {0};
        int sum {0};
        int result {INT32_MAX};
        for (int j = 0; j < nums.size(); j++)
        {
            sum = sum + nums[j];
            while (sum >= target)
            {
                int sublong = j - i + 1;
                sum = sum - nums[i];
                i++;
                result = min(result,sublong);
            }
        }
        return result==INT32_MAX? 0 : result;
    }
};
