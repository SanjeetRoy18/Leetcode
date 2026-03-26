/*
Linked List:
-> Linked List Cycle (Easy)
 #141 | Hash Table | Linked List | Two Pointers
*/
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) return false;

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}


/*
Two Pointers:
-> Valid Palindrome
 #125 | Two Palindromes | String
*/
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }

        else{
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }
    }
    return true;
}
