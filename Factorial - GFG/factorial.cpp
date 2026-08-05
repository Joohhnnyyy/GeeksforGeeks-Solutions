class Solution {
  public:
  int factorialRecursion(int n){
      if( n == 1)return 1;
      return n * factorialRecursion(n -1);
  }
    int factorial(int n) {
        // code here
        if( n == 0 )return 1;
        factorialRecursion(n);
    }
};