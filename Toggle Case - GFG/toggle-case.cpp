class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        for(int i = 0 ; i < s.size() ; i++){
            if(isupper(s[i]))s[i] = s[i] + 32;
            else s[i] = s[i] - 32;
        }return s;
    }
};