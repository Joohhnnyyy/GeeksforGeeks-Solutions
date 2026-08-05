class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        string str = to_string(n);
        for(int i = 0 ; i < str.size() / 2 ; i++){
            swap(str[i] , str[str.size() - 1 - i]);
        }
        int ans = stoi(str);
        return ans;
    }
};