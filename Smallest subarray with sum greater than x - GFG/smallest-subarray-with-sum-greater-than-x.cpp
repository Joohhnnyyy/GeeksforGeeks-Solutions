class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int left = 0;
        int sum = 0;
        int res = INT_MAX;
        for(int right = 0 ; right < arr.size() ; right++){
            sum += arr[right];
            while( sum > x ){
                res = min(res , right - left + 1);
                sum -= arr[left++];
            }
        }return ( res == INT_MAX ? 0 : res );
    }
};