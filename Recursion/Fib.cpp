#include <iostream>
using namespace std;

int fib(int val){
    if (val <=1) return val;//base case
    return fib(val-1)+ fib(val-2);
}

int main()
{
    int val;
    cin>> val;
    int ans = fib(val);
    cout<<ans;
    
    
    return 0;
}
