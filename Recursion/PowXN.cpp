#include<iostream>
using namespace std;

int pow(int x, int n){
    cout<<x<<n<<endl;
    if(n ==0) return 1;
    if(n == 1) return x;
    if(n == 2) return x*x;
    
    int k = n/2;
    return pow(x,k) * pow(x,n-k);
}

int main()
{
    int x, n;
    cin>>x>>n;
    int ans  = pow(x,n);
    cout<<ans;

    return 0;
}
