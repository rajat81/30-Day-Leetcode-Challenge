class Solution {
public:
    // ab##abc#
    void remove(string& s){
        int len = 0;
        for(int i = 0;i<(int) s.length(); ++i){
            if(s[i]=='#'){
                if(len>0) len--;
            }
            else {
                s[len] = s[i];
                len++;
            }

        }

        s.resize(len);
      //  cout<<s<<" "<<len;
        /*
        for(char c:s){
            if(c=='#'){
                if(!s2.empty()){
                    s2.pop_back();
                }
            }
            else{
                s2+=c;
            }
        }
        return s2;*/
    }
    bool backspaceCompare(string S, string T) {
        remove(S);
        remove(T);
        return S == T;

    }
};
