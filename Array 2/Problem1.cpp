class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int c,b;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                c=nums[i];
            }
        }
         for (int i = 1; i <= nums.size(); i++) {
            if (!binary_search(nums.begin(), nums.end(), i)) {
                b = i;
                break;
            }
        }
        return {c,b};
    }
};
