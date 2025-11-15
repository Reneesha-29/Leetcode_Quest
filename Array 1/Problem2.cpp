class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> A, B, X;
        for(int i=0; i<n; i++){
            A.push_back(nums[i]);
        }
        for(int i=n; i<2*n; i++){
            B.push_back(nums[i]);
        }
        for(int i=0; i<n; i++){
            X.push_back(A[i]);
            X.push_back(B[i]);
        }
        return X;
    }

};
