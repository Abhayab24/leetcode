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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        int cnt2=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        int org=cnt-n;
        ListNode* temp2=head;
        while(temp2!=NULL){
            if(cnt2==org-1){
                ListNode* del= temp2->next;
                temp2->next=del->next;
                delete del;
            }
            cnt2++;
            temp2=temp2->next;
        }
        return head;
    }
};