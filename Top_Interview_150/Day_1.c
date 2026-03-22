/*
Array / String:
-> Merge Sorted Array (Easy)
    # 88 | Array | Two Pointers | Sorting
*/
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }

    }
}



/*
-> Remove Element (Easy)
    # 27 | Array | Two Pointers
*/
int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    int j=1;
    for(int i=0;i<numsSize;i++){
       
      if(val != nums[i]){
       count++;
      }
      else{
       nums[i]=nums[numsSize-j];
       
       i--;
       numsSize--;

      }
    }

    return count;
}