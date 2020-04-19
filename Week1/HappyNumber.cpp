class Solution {
public:
    int val(int n){
        int t = 0;
        while(n){
            int digit = n%10;
            n/=10;
            t += (digit*digit);
        }
        return t;
    }

    bool isHappy(int n) {

        unordered_set<int> v;

        while(true){

            if(n == 1){
                return true;
            }

            n = val(n);
            if(v.count(n) == 1){
                 return false;
           }

            v.insert(n);


            }
        }

    };
