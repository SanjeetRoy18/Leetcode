/*
    Bit Manipulation :
    -> Single Number (Medium)
      #136 | Array | Bit Manipulation
*/

class Solution{
    public int singleNumber(int[] nums){
        int index = 0;
	for(int i = 0; i<nums.length; i++){
	    index = index^nums[i];
	}
	
	return index;
    }
}