class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int k = 1;
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i - 1] != arr[i] )arr[k++] = arr[i];
        }
        vector<int>newArray ;
        for(int i = 0 ; i < k ; i++){
            newArray.push_back(arr[i]);
        }
        if(newArray.size() == 2){
            if(newArray[0] == newArray[1])newArray.pop_back();
        }
        return newArray;
    }
};