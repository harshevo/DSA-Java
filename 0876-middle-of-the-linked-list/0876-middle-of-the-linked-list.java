/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode temp = head;
        int c  = count(temp);
        
        int i = 0; 
        
        while(i < c/2){
            head = head.next;
            i++;
        }
        return head;
    }
    
    public int count(ListNode head){
        
        int ct =0;
        
        while(head != null ){

            ct++;
            head = head.next;
            
        }
        
        return ct;
        
    }
}