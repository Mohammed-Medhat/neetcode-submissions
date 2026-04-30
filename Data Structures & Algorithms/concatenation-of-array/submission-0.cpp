class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>results;
        int n = nums.size();
        for(int i=0;i<2*n;i++){
            int x=i%n;

            results.push_back(nums[x]);
        }
        return results;
    }
};