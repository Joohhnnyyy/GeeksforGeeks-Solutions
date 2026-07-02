class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        stack<int> st;
        vector<int> res(arr.size());
        int n = arr.size() - 1;
        for(int i = n - 1 ; i >= 0 ; i--)st.push(arr[i]);
        for(int i = n ; i >= 0 ; i--){
            while( !st.empty() && st.top() <= arr[i])st.pop();
            if(st.empty())res[i] = -1;
            else res[i] = st.top();
            st.push(arr[i]);
        }return res;
        
    }
};