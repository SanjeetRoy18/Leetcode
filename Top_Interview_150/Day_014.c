/*
    Backtracking :
    -> Letter Combinations of a Phone Number (Medium)
      #17 | Hash Table | String | Backtracking
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mapping[] = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

void dfs(char *digits, int index, char *current, char **result, int *returnSize){
    if(digits[index] == '\0'){
        result[*returnSize] = strdup(current); //cretes new copy of the string in heap memory
        (*returnSize)++;
        return;
    }
    
    int digit = digits[index] - '0';
    char *letters = mapping[digit];

    for(int i = 0; letters[i] != '\0'; i++){
        current[index] = letters[i];
        dfs(digits, index+1, current, result, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {

    *returnSize = 0;
    if(digits[0] == '\0') return NULL;

    char **result = (char**)malloc(1000*sizeof(char*));
    char current[10];

    dfs(digits, 0, current, result, returnSize);

    return result;
}