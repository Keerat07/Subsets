class Solution {
public:
    void subsetsum(int i,vector<int>&nums,vector<int>&subset,vector<vector<int>> &result){
        if(i==nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        subsetsum(i+1,nums,subset,result);
        subset.pop_back();
        subsetsum(i+1,nums,subset,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        subsetsum(0,nums,subset,result);
        return result;
    }
};
