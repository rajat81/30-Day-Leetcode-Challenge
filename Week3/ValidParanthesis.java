class Solution {
    public boolean checkValidString(String s) {
        int l=0;
        int star=0;
        int r=0;
   // (*))


        for(char c: s.toCharArray()){
            if(c == '*'){
                star++;
            }
            else if(c == '(') l++;
            else if(c == ')') r++;
            if(r<=(star + l)) continue;
            return false;
        }
        l = 0;
        star = 0;
        r = 0;

        int len = s.length();
        for(int i= len-1;i>=0;--i){
            if(s.charAt(i)=='*'){
                star++;
            }
            if(s.charAt(i) == ')') r++;
            if(s.charAt(i) == '(') l++;
            if(l<=(star+r)) continue;
            return false;
        }
        return true;
    }
}
