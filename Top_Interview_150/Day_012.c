/*
    Hash map:
    -> Ransom Note (Easy)
      #383 | Hash Table | String | Counting
*/

#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int freq[26] = {0};

    for(int i = 0; magazine[i] != '\0'; i++){
        freq[magazine[i] - 'a']++;
    }

    for(int i = 0; ransomNote[i] != '\0'; i++){
        if(freq[ransomNote[i] - 'a'] > 0){
            freq[ransomNote[i] - 'a']--;    
        }
        else{
            return false;
        }
    }

    return true;
}



/*
  Hash map:
    -> Isomorphic Strings (Easy)
      #205 | Hash Table | String
*/

#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    //Total 256 ASCII values 
    int mapStoT[256] = {0};
    int mapTtoS[256] = {0};

    for(int i = 0; s[i] != '\0'; i++){
        char c1 = s[i];
        char c2 = t[i];

        if(mapStoT[c1] != 0 || mapTtoS[c2] != 0){
            if(mapStoT[c1] != c2 || mapTtoS[c2] != c1){
                return false;
            }
        }
        else{
            mapStoT[c1] = c2;
            mapTtoS[c2] = c1;
        }
    }
    
    return true;
}