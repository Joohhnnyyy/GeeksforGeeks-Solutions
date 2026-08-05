class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        return (a + b +c ) - (max({a,b,c}) + min({a,b,c}));
    }
};