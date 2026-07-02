class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> res;
        int left = 0 , sum = 0 ;
        for(int right = 0 ; right < arr.size() ; right++){
            sum += arr[right];
            while(sum >= target){
                if(sum == target){
                    return {left+1 , right + 1};
                }
                sum -= arr[left++];
            }
            
        }return {-1};
    }
};