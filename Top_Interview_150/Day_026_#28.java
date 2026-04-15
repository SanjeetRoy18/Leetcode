/*
    Array / String :
    -> Find the Index of the First Occurrence in a String (Easy)
      #28 | Two Pointers | String | String Matching
*/

    class Solution {
        public int strStr(String haystack, String needle) {
            int i = 0;
            int n = needle.length();
            int n1 = haystack.length();
            int limit = n1-n;

            for(i = 0; i<=limit; i++){
                String s = haystack.substring(i , i+n); // the second value is not included -> [0,3)
                if(needle.equals(s)){
                    return i;
                }
            }

            return -1;
        }
    }