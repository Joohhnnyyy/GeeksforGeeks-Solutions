class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int left = 0;
        int right = s.size();
        for(int i = 0 ; i < s.size() / 2 ; i++){
            if(s[i] != s[s.size() - 1 - i ])return false;
        }return true;
    }
};