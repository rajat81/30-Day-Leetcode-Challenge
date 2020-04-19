class Solution {
public:
    void leftShift(string& s){
        char c = s.front();
        s.erase(s.begin());
        s.push_back(c);
    //    cout<<s;
    }

    void rightShift(string& s){
        char c = s.back();
        s.pop_back();
     //   cout<<"After pop back:"<<s<<endl;
        s = c + s;
     //   cout<<s;
    }
    string stringShift(string s, vector<vector<int>>& shift) {
        int l = 0, r=0;

        for(vector<int> v:shift){
            if(v[0] == 1)
                r+=v[1];
            else
                l += v[1];
        }
    //    cout<<"l = "<<l<<" r = "<<r;
        if(r == l)
            return s;
        if(r>l){
            for(int i = 0;i<r-l;i++)
                rightShift(s);
            return s;
        }
        for(int i = 0;i<l-r;i++)
                leftShift(s);
            return s;
    }
};
