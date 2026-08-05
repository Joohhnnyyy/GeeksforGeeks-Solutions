class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int>ans;
        for(int i =0 ; i < arr.size()  ; i++){
            if(arr[i] < mini)mini = arr[i];
            if(arr[i] > maxi)maxi = arr[i];
        }ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};