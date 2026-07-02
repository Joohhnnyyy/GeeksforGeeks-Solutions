class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int sum = 0 ;
        int res = 0 ;
        unordered_map<int ,int > f;
        f[0] = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            int freq = f[sum];
            res += freq;
            f[sum]++;
        }return res;
    }
};