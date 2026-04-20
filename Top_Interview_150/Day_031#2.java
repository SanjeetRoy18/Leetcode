/*
    Linked List :
    -> Add Two Numbers (Medium)
      #222 | Binary Search | Bit Manipulation | Tree | Binary Tree
*/


class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode();
        ListNode curr = dummy;
        int carry = 0;

        ListNode temp1 = l1;
        ListNode temp2 = l2;

        while (temp1 != null || temp2 != null || carry > 0) {
            int sum = carry;
            if (temp1 != null) {
                sum += temp1.val;
                temp1 = temp1.next;
            }
            if (temp2 != null) {
                sum += temp2.val;
                temp2 = temp2.next;
            }

            curr.next = new ListNode(sum % 10);
            carry = sum / 10;
            curr = curr.next;
        }

        return dummy.next;
    }
}