/*
    Hashmap :
    -> Word Pattern (Easy)
      #290 | Hash Table | String
*/

import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        //splits s = {"dog", "cat", "cat", "dog"}
        String[] words = s.split(" "); 
        
        // If lengths don't match, the pattern can't match
        if (words.length != pattern.length()) {
            return false;
        }

        Map<Character, String> map = new HashMap<>();

        for(int i = 0; i<pattern.length(); i++){
            char c = pattern.charAt(i);
            String word = words[i];

            if(map.containsKey(c)){
                if(!map.get(c).equals(word)){
                    return false;
                }
            }
            else{
                if(map.containsValue(word)){
                    return false;
                }
                map.put(c,word);
            }
        }

        return true;
    }
}