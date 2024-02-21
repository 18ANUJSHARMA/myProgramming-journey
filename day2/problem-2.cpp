// to check whether the given string is pangram or not.

// pangram means = a string  that  contains every  letter  of the alphabet  at least once, these letter can be appear as a lower case or upper case.

                    // using array

bool isPangram(string s){
    int n=s.length();
    if(n<26){
        return false;
    }
    bool visited[26] = {0};
    for(int i=0;i<n;i++){
        char x=s[i];
        if(x>='a' && x<='z'){
            visited[x-'a'] = true;
        }
        if(x>='A' && x<='Z'){
            visited[x-'A'] = true;
        }
    }
    for(int i=0;i<26;i++){
        if(visited[i]==false){
            return false;
        }
    }
    return true;
}