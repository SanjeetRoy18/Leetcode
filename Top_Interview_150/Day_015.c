/*
    Bit Manipulation :
    -> Number of 1 Bits (Easy)
      #191 | Divide and Conquer | Bit Manipulation 
*/

#include <math.h>

int hammingWeight(int n) {
    int count = 0;

    while(n != 0){
        int num = log2(n);
        n = n - pow(2,num);
        count++;
    }

    return count;
}