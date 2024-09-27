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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode();
        ListNode* rhead= res;
        int c=0;
        int a,b;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL){
                a=l1->val;
                l1=l1->next;}
            else a=0;
            if(l2!=NULL){
                b=l2->val;
                l2=l2->next;}
            else b=0;
            int ans=a+b+c;
            c=0;
            if(ans>9){
                c=ans/10;
                ans%=10;
            } 
            ListNode* temp=new ListNode(ans);
            rhead->next=temp;
            rhead=rhead->next;
        }
        if(c!=0){
            ListNode* temp=new ListNode(c);
            rhead->next=temp;
            rhead=rhead->next;
        }
        return res->next;
    }
};