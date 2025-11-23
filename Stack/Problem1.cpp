class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>x;
        int t=1;
        for(int i=0; i<target.size(); i++){
            while(t<target[i]){
                x.push_back("Push");
                x.push_back("Pop");
                t++;
            }
            x.push_back("Push");
            t++;
        }
        return x;
    }
};