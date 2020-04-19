class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> l(len,1),r(len,1);
        for(int i = 1;i<len ; i++){
            l[i] = l[i-1] * nums[i-1];
        }
        for(int i = len-2; i>=0; --i){
            r[i] = nums[i+1]*r[i+1];
        }

        vector<int> ans;
        for(int i = 0;i<len ; i++){
            ans.push_back(l[i] * r[i]);
        }
        return ans;
    }
};
