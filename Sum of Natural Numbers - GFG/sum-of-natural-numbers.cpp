#include <iostream>
using namespace std;

int total(int n){
    if( n == 0 )return 0;
    return n + total( n - 1);
}
int main() {
    int n;
    cin >> n;

    // code here
    cout << total(n);
    

    return 0;
}