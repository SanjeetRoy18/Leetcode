/*
    Sliding Window:
    -> Minimum Sze Sbarray Sum
      #209 Array | Binary Search | Sliding Window | Prefix Sum
*/


#include <limits.h>

int minSubArrayLen(int target, int* nums, int numsSize) {
    int left = 0;
    int current_sum = 0;
    int min_len = INT_MAX;

    for (int right = 0; right < numsSize; right++) {
        current_sum += nums[right];

        // While the current window meets the target, try to shrink it
        while (current_sum >= target) {
            int current_window_len = right - left + 1;
            if (current_window_len < min_len) {
                min_len = current_window_len;
            }
            
            // Shrink from the left to find a smaller subarray
            current_sum -= nums[left];
            left++;
        }
    }

    return (min_len == INT_MAX) ? 0 : min_len;
}