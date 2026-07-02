class Solution {
  public:
    int maxInstance(string s) {
        // code here
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        string str = "balloon";
        for(int i = 0 ; i < str.size() ; i++){
            need[str[i]]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            have[s[i]]++;
        }
        int ans = INT_MAX;
        for(auto i : need){
            char ch = i.first;
            int f_need = i.second;
            int f_have = have[ch];
            ans = min( ans , f_have / f_need);
        }
        return (ans == INT_MAX ? 0 : ans);
        
    }
};