class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
            double discriminant = b * b - 4 * a * c;
            if(discriminant < 0)return {-1};
            double temp1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
            double temp2 = (-b - std::sqrt(discriminant)) / (2.0 * a);
        
            int x1 = floor(temp1);
            int x2 = floor(temp2);
            vector<int>ans;
            ans.push_back(max(x1,x2));
            ans.push_back(min(x1,x2));
            return ans;
    }
};