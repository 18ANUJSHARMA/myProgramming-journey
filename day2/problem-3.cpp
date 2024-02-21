// to check whether the given two string are anagram or not 

// anagram means = same set of character , it can be in any order.
bool anagram(string s1, string s2){
    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.negin(),s2.end());
    for(int i=0;i<n1;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}


                // method-2 using character counting

bool anagram(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2){
        return false;
    }
    int count[256]={0};
    for(int i=0;i<n1;i++){
        count[s,[i]]++;
    }
    for(int i=0;i<n2;i++){
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
} 