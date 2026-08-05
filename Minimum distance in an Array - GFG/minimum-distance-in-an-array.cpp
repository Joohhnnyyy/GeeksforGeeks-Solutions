class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int xIdx = -1;
        int yIdx = -1;
        int minDiff = INT_MAX;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] == x)xIdx = i;
            if(arr[i] == y)yIdx = i;
            if(xIdx != -1 && yIdx != -1 ){
                minDiff = min(minDiff ,abs(xIdx - yIdx));
            }
        }
        return (minDiff == INT_MAX? -1 : minDiff );
    }
};