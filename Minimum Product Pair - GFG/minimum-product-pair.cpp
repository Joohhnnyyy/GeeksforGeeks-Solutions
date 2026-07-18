class Solution {
  public:
    long long printMinimumProduct(vector<int> &arr) {
        // code here
        int firstSmaller = INT_MAX;
        int secondSmaller = INT_MAX;
        for(int i = 0 ; i < arr.size() ; i++){
            if( arr[i] < firstSmaller ){
                secondSmaller = firstSmaller;
                firstSmaller = arr[i];
            }else if( arr[i] < secondSmaller )secondSmaller = arr[i];
        }return firstSmaller * secondSmaller;
    }
};