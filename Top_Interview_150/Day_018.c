/*
    Hashmap :
    -> Happy Number (Easy)
      #202 | Hash Table | Math | Two Pointers
*/

#include <math.h>

bool isHappy(int n) {
    int sq[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};

    while(n != 1 && n != 4){    //1 is happy loop, 4 is sad loop (endlessly loops)
        int sum = 0;

        while(n>0){
            int digit = n%10;
            sum += sq[digit];
            n /= 10;
        }

        n = sum;
    }

    return (n == 1);
}
