class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        if(arr.size() < 3)return -1; 
        int larg = INT_MIN;
        int secLarg = INT_MIN;
        int thirLarg = INT_MIN;
        for ( int  num : arr){
            if(num >= larg){
                thirLarg = secLarg;
                secLarg = larg;
                larg = num;
            }else if(num >= secLarg ){
                thirLarg = secLarg;
                secLarg = num;
            }else if ( num >= thirLarg )thirLarg = num;
        }return thirLarg;
    }
};