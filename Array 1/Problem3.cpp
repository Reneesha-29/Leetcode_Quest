class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int c1 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                c++;
                c1 = max(c1,c);
            }
            else{
                c=0;
            }
        }
        return c1;
    }
};