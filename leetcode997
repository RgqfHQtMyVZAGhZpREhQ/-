class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        const int array_size = nums.size();
        vector<int> result(array_size);
        int left = 0;
        int right = array_size - 1;
        int count = array_size - 1;
        while (left <= right)
        {
            if ((nums[left] * nums[left]) < (nums[right] * nums[right]))
            {
                result[count] = (nums[right] * nums[right]);
                count--;
                right--;
            }
            else
            {
                result[count] = (nums[left] * nums[left]);
                count--;
                left++;
            }
        }
        return result;
    }
};
