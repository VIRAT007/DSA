//LC142-Given Head off a linkedlist, return head oof the cycle;

//BRUTEFORCE using HashTable(MAP) TC->O(nlogn) SC->(n) 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
            return nullptr;
        map<ListNode*,int> hn;
        int i=0;
        while(head!=nullptr){   
            if(hn.find(head)!=hn.end())
                return head;
            hn[head]=head->val;
            head=head->next;
        }
        
    return nullptr;}

    //fast and slow pointer method TC->O(n),SC(1)
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
            return nullptr;
        ListNode *s=head,*h=head,*l_beg;
        while(h->next!=nullptr && h->next->next!=nullptr){
            s=s->next;
            h=h->next->next;
            if(s==h)
            {
            l_beg=head;
            while(l_beg!=s)
                {   
                    l_beg=l_beg->next;
                    s=s->next;
                }
            return l_beg;
            }
        }
    return nullptr;
    }
};