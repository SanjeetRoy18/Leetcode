/*
    Hashmap :
    -> Two Sum (Easy)
      #1 | Array | Hash Table | Junior
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int total = 0;

        for(int i =0 ; i < nums.length-1; i++){
            for(int j = i+1; j < nums.length; j++){
                
            total = nums[i] + nums[j];
            if(total == target){
                return new int[]{i,j};
                
            }

            }
        }
        return new int[]{};
    }
}
