class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int t:nums){
            x ^= t;
        }
        return x;
    }
};
