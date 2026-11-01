class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int larg = INT_MIN;
        int secLarg = INT_MIN;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] > larg){
                secLarg = larg;
                larg = arr[i];
            }else if ( arr[i] > secLarg && arr[i] < larg)secLarg = arr[i];
        }return (secLarg == INT_MIN ? -1 : secLarg);
    }
};