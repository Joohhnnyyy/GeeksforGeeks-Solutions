class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string str = s;
        int i = 0;
        int j = s.size() - 1;
        while( i< j){
            swap(str[i++] , str[j--]);
        }return str;
    }
};
