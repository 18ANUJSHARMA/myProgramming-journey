#include <bits/stdc++.h>

void printIndex(string text,string pat){
    int found=text.fint(pat);
    while(found!=string::npos){
        cout<<"patern found at"<<found<<endl;
        found=text.find(pat,found+1);
    }
}





int main(){
    string text,pat;
    cin>>string>>pat;
    printIndex(text,pat);
    return 0;
}