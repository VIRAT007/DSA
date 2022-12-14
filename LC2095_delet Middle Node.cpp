/*
2095. Delete the Middle Node of a Linked List
Medium

2276

42

Add to List

Share
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
Example 2:


Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
Example 3:


Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void delet(ListNode *prev)
    {
     // ListNode *tmp;
    // tmp=prev->next;
    prev->next=prev->next->next;
    // delet(tmp);
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow,*fast,*prev;
        slow=fast=head;
    
       if(fast->next==nullptr){
           return nullptr;
        }
         else if(fast->next->next==nullptr)
        {   
            prev=slow;
            slow=slow->next;
            
        }
        else               
        while(fast->next)
        {
         
         fast=fast->next->next;
         prev=slow;
         slow=slow->next;
        
        if(fast==nullptr)
            break;
        }
        delet(prev);
        cout<<slow->val;
    return head;}
};


//best approach
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: return nullptr if there is only one node.
        if (head -> next == nullptr)
            return nullptr;
        
        // Initialize two pointers, 'slow' and 'fast'.
        ListNode *slow = head, *fast = head -> next -> next;
        
        // Let 'fast' move forward by 2 nodes, 'slow' move forward by 1 node each step.
        while (fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        // When 'fast' reaches the end, remove the next node of 'slow' and return 'head'.
        slow -> next = slow -> next -> next;
        return head;
    }
};