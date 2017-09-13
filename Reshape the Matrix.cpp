class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r * c != (nums.size()*nums[0].size()))return nums;
        int col = 0;
        int row = 0;
        vector<vector<int>> result(r, vector<int> (c, 0));
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j]=nums[row][col];
                col++;
                if(col==nums[0].size()) col=0,row++;
            }
        }
        return result;
    }
};