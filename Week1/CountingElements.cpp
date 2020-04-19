class Solution {
public:
    int countElements(vector<int>& arr) {
        set<int> s;
        for(int v:arr){
            s.insert(v);
        }
        int cnt = 0;
        for(int a:arr){
            if(s.find(a+1)!=s.end())
                cnt++;
        }
        return cnt;
    }
};
