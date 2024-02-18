/* sample problem -> string :- write a program to find one extra character in a string .
 */

/* method 1 */

char findExtra(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            return s2[i];
        }
    }
    return s2[n];
}


/* method 2 */
                /* using counting */

char findExtra( string s1,string s2){
    int count[256]={0};
    for(char x:s2){
        count[x]++;
    }
    for(char x:s1){
        count[x]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]==1){
            return (char)i;
        }
    }
    return 0;
}



 
     /* method 3 */
                            /*  using bitwise */

char findExtra(string &s1, string &s2){
    int n=s,.length();
    for(int i=0;i<n;i++){
        res=res^s1[i]^s2[i];
    }
    res=res^s2[n];
    return (char)res;
}



