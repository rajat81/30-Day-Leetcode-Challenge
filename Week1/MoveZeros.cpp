class Solution {
public:

    void moveZeroes(vector<int>& nums) {

        vector<int> a;
        for(int x:nums){
            if(x!=0)
                a.push_back(x);
        }
        while(a.size()!=nums.size()){
            a.push_back(0);
        }

        nums = a;
    }
};
