class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>C;
        for(int i=0; i<nums.size(); i++){
            C.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            C.push_back(nums[i]);
        }
        return C;
    }
};