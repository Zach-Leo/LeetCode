class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Num = nums.size();
        int sum = 0;
        int max = 0;
        for (int i = 0; i< Num; i++) {
            sum = (sum + nums[i]) * nums[i];
            if (sum > max) {
                max = sum;
            }
        }
        return max;
    }
};