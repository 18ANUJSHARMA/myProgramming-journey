#include <bits/stdc++.h>

int binary_to_decimal(string s){
    int base=1;
    int ans=0;
    int size=s.length();
    for(int t=size-1;i>=0;i--){
        ans+=((int)(s[i]-'0')*base);
        base *= 2;
    }
    return ans;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        binary_to_decimal(s);
        return 0;
    }
}