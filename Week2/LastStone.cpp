class Solution {
public:

    int lastStoneWeight(vector<int>& v) {
        int l = v.size();
        for(int i = 0;i<l;i++){
            if(v.size() == 1) return v[0];
            if(v.size() == 0) return 0;
            sort(v.begin(), v.end());
            int a = v.back();
            v.pop_back();
            int b = v.back();
            v.pop_back();
            if(a!=b)
                v.push_back(b>a?b-a:a-b);/*
             for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
                std::cout << ' ' << *it;
            cout<<'.'<<endl;*/
        }
        if(v.size()==0) return 0;
        return v[0];
    }
};
