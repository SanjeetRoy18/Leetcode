/*
    Hashmap :
    -> Valid Anagram (Easy)
      #242 | Hash Table | String | Sorting
*/

#include <string.h>

bool isAnagram(char* s, char* t) {
    int letters[26] = {0};
    int sl = strlen(s);
    int tl = strlen(t);

    if(sl != tl) return false;

    for(int i = 0; i<sl; i++){
        letters[s[i] - 'a']++;
    }    

    for(int i = 0; i<tl; i++){
        if(letters[t[i] - 'a'] != 0){
            letters[t[i] - 'a']--;
        }
        else{
            return false;
        }
    }

    return true;
}