/*
Array/String:
-> Remove Duplicates from Sorted Array II (medium)
  #80 | Array | Two Pointers
*/
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize <= 2) return numsSize;

    int j = 2;

    for(int i = 2; i<numsSize; i++){
        if(nums[i] != nums[j-2]){
            nums[j++] = nums[i];
        }
    }

    return j;

}


/*
-> Majority Element (Easy)
  #169 | Array | Hash Table | Divide and Conquer | Sorting | Counting
*/

int majorityElement(int* nums, int numsSize){
    int candidate = nums[0];
    int count = 1;

    for(int i = 1; i<numsSize; i++){
        if(nums[i] == candidate){
            count++;
        }
        else{
            count--;
            if(count == 0){
                candidate = nums[i];
                count = 1;
            }
        }
    }
    return candidate;
}
