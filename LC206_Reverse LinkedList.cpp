// reverse linkedlist with iterative and reccursive way

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
//RECCCURSIVE
class Solution {
    public:
    ListNode* reccur(ListNode *prev,ListNode *head,ListNode *nxt,ListNode *newHead){
        if(head->next==nullptr){
        head->next=prev;
            return head;}
        head->next=prev;
        prev=head;
        head=nxt;
        nxt=nxt->next;
        return reccur(prev,head,nxt,newHead);}
    
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr,*nxt,*newHead;
        if(head==nullptr)
            return head;
        nxt=head->next; 
         newHead=reccur(prev,head,nxt,newHead);
    return newHead;}
};

//ITERATIVE
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr,*nxt;
        if(head==nullptr)
            return head;
        
        while(head->next!=nullptr)
        {
         nxt=head->next;
         head->next=prev;
         prev=head;
         head=nxt;
        }
        head->next=prev;
    return head;}
};