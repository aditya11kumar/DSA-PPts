#include<iostream>
using namespace std;
int GCD(int i, int j){
    if(i == 0) return j;
    if(j == 0) return i;
    return GCD(j%i, i);
}

int main(){
    int i, j;
    cout<<"Enter the two numbers: ";
    cin>>i>>j;
    int ans = GCD(i, j);
    cout<<"GCD of "<<i <<" and "<<j<<" is "<<ans<<endl;
}