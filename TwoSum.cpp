class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            int numtofind = target - nums[i];
            for(int j = 0; j < size; j++) {
                if (j != i){
                    if (nums[j] == numtofind) {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
        }
        return result;
    }
};