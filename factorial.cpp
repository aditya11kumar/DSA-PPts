#include <bits/stdc++.h>
using namespace std;
int factorialRec(int val){
    if(val == 1 or val == 0) return 1;
    return val * factorialRec(val-1);
}
int factorialNonRec(int val){
    int ans = 1;
    for(int i = val; i > 0; i++){
        ans = ans* i;
    }
    return ans;
}
int main(){
    int val= 0;
    cout<<"Enter the value:"<<endl;
    int ans1 = factorialNonRec(val);
    int ans2 = factorialRec(val);
    cout<<"Ans without rec: "<<ans1;
    cout<<"Ans with rec: "<<ans2;

}