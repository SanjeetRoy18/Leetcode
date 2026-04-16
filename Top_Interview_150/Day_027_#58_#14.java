/*
    Array / String :
    -> Length of Last Word (Easy)
      #58 | String 
*/

class Solution {
    public int lengthOfLastWord(String s) {
        int n = s.length();
        int count = 0;

        if(n == 1){
            if(s != " "){ //" " a blank space in string
                return 1;
            }
            else{
                return 0;
            }
        }

        for(int i = n-1; i>=0; i--){
            char ch = s.charAt(i);

            if(ch != ' '){//' ' a blank space in character
            if(i-1 >= 0){
                if(s.charAt(i-1) != ' '){
                    count++;
                }
                else{
                    break;
                }
            }
            else{
                return count+1;
            }
            }
        }
        return count+1;
    }
}

-----------------------------------------------------------------

/*
    Array / String :
    -> Longest Common Prefix (Easy)
      #14 | Array | Trie | String 
*/

class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        if(strs.length == 0 || strs == null){
            return "";
        }

        for(int i = 0; i<strs[0].length(); i++){ // length of String, so use ()
            char ch = strs[0].charAt(i);
            for(int j = 0; j<strs.length; j++){ // length of array
                if(i == strs[j].length() || ch != strs[j].charAt(i)){
                    return strs[0].substring(0,i);
                }
            }
        }
        return strs[0];
    }
}