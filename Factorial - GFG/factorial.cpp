class Solution {
  public:
  int factorialRecursion(int n){
      if(n == 0)return 1;
      if( n == 1)return 1;
      return n * factorialRecursion(n -1);
  }
    int factorial(int n) {
        // code here
        factorialRecursion(n);
    }
};