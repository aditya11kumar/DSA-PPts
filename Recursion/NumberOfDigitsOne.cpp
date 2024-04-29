#include <bits/stdc++.h>

int countOne(int val){
        int ans = 0;
        while(val != 0){
            val%10 == 1 && ans++;
            val = val/10;
        }
        return ans;
}
int countDigit(int start, int end){
        if (start == end) return countOne(start);
        if (end == start+1)  return countOne(start)+ countOne(end);
        int mid = (start+end)/2;
        return countDigit(start, mid-1)+countOne(mid) + countDigit(mid+1,end);
    
}
int countDigitOne(int n) {
        int ans  = countDigit(0,n);
        return ans;
}

int main(){
    int n; 
    std::cout<<"Enter the value:"<<std::endl;
    std::cin>>n;
    int ans = countDigitOne(n);
}