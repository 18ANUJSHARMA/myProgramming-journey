#include <bits/stdc++.h>


string decimal_to_binary(int n){
    string s = "";
    while(n>0){
        int t = n%2;
        s += to_string(s);
        n /= 2;

    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
int n;
cin>>n;
string ans = decimal_to_binary(n);
cout<<s<<endl;
return 0;

}
