/*
Array/String:
-> Rotate Array (Medium)
  #189 | Array | Math | Two Pointers
*/
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if(k == 0 || k == numsSize) return;

    int nums2[numsSize];

    for(int j = 0; j<numsSize; j++){
        nums2[j] = nums[(j + numsSize-k)%numsSize];
    }

    for(int i = 0; i<numsSize; i++){
        nums[i] = nums2[i];
    }
}


/*
Math:
-> Factorial Trailing Zeroes (Medium)
  #172 | Math
*/
int trailingZeroes(int n) {
    int count = 0;
    
    while(n > 0){
        n = n/5;
        count += n;
    }

    return count;
}
