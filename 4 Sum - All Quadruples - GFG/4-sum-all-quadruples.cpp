class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> res;
        if(arr.size() < 4 )return {};
        sort(arr.begin() , arr.end());
        for(int i = 0; i < arr.size() - 3 ; i++){
            if( i > 0 && arr[i] == arr[i -1])continue;
            for(int j =  i + 1 ; j < arr.size() - 2 ; j++){
                if( j > i + 1 && arr[j] == arr[j -1])continue;

                int left = j + 1, right = arr.size() - 1;
                while( left < right ){
                    long long sum = ( long long )(arr[i] + arr[j] + arr[left] + arr[right]);
                    if(sum == target){
                        res.push_back({arr[i] , arr[j] , arr[left] , arr[right]});
                        left++,right--;
                        while(left < right && arr[left] == arr[left - 1])left++;
                        while(left < right && arr[right] == arr[right + 1])right--;
                    }else if( sum < target)left++;
                    else right--;
                }
            }
        }return res;
    }
};