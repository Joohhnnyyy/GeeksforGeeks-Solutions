class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int currAns = a[0];
        int ans = a[0];
        for(int i = 1 ; i < a.size() ; i++){
            currAns = min(currAns + a[i] , a[i]);
            ans = min( ans , currAns);
        }return ans;
    }
};
