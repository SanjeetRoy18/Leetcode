/*
    Two pointers:
    -> Is Subsequence (Easy)
      #392 | Two Pointers | String | Dynamic Programming
*/


#include <string.h>

bool isSubsequence(char* s, char* t) {
    int limit = 0;
    int n = strlen(s);
    int N = strlen(t);
    int i = 0;
    int found = 0;

    if(n > N) return false;

    while(i != n && limit < N){

        for(int j = limit; j<N; j++){
            if(s[i] == t[j]){
                limit = j+1;
                found = 1;
                break;
            }
        }

        if(found == 1){
            found = 0;
        }
        else{
            return false;
        }

        i++;
    }

    if(i == n){
        return true;
    }
    else{
        return false;
    }
}
