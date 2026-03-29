/*
    Bit Manipulation:
    -> Reverse Bits (Medium)
      #190 | Divide and Conquer | Bit Manipulation
*/

#include <math.h>

int reverseBits(int n) {
    if(n == 0) return 0;

    int num = n;
    int rev = 0;

    while(num != 0){
        int temp = log2(num);

        rev += pow(2,(31-temp));

        num = num - pow(2,temp);
    }

    return rev;
}

----------------------------------------------------
Better way:
----------------------------------------------------

uint32_t reverseBits(uint32_t n) {
    uint32_t rev = 0;

    for(int i = 0; i < 32; i++) {
        rev <<= 1;        // shift rev left
        rev |= (n & 1);   // take last bit of n
        n >>= 1;          // shift n right
    }

    return rev;
}