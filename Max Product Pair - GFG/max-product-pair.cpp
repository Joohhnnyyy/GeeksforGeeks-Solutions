class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        // code here
        int firstLarger = 0;
        int secondLarger = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > firstLarger){
                secondLarger = firstLarger;
                firstLarger = arr[i];
            }else if( arr[i] > secondLarger)secondLarger = arr[i];
        }return firstLarger * secondLarger;
    }
};