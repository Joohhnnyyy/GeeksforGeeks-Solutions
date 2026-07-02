class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        sort(arr.begin() , arr.end());
        int start1 = arr[0][0];
        int end1 = arr[0][1];
        for(int i = 1 ; i< arr.size() ; i++){
            int start2 = arr[i][0];
            int end2 = arr[i][1];
            if(start2 < end1)return false;
            start1 = start2;
            end1 = end2;
        }return true;
    }
};