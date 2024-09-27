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
    int getlen(ListNode* head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    void remove(ListNode* &head,int c){
        ListNode* prev=NULL;
        ListNode* curr=head;
        if(c==1){
            head=head->next;
            delete curr;
            return ;
        }
        c--;
        while(c){
            prev=curr;
            curr=curr->next;
            c--;
        }
        prev->next=prev->next->next;
        delete curr;
        return;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getlen(head);
        int c=len-n+1;
        remove(head,c);
        return head;
    }
};