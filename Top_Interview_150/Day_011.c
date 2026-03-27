/*
    Sliding Window:
    -> Longest Substring Without Repeating Characters (Medium)
      #3 | Staff | Hash Table | String | Sliding Window
*/

#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    if(n == 0) return 0;
    if(n == 1) return 1;

    int maxCount = 1;
    
    for(int i = 0; i<n-1; i++){
        int j = i+1;
        int count = 1;
        char s2[n];
        s2[0] = s[i];
        
        while(j<n){
        int same = 0;

            for(int t = 0; t<count; t++){
                if(s[j] == s2[t]){
                    same = 1;
                    break;
                }
            }
            if(same == 1) break;
            s2[count] = s[j];
            count++;
            j++;

        }

        if(count > maxCount) maxCount = count;
    }

    return maxCount;
}