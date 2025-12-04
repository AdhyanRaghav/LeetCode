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
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* temp=head;

        int n=0;

        while(temp!=NULL){
            n++;
            temp=temp->next;
        }

        int r=n/2;
        int i=0;
        temp=head;

        if(n==1){
            head=head->next;
        }else{
            while(i<r+1 && temp!=NULL){
                if(i==r-1){
                    temp->next=temp->next->next;
                }
                i++;
                temp=temp->next;
            }
        }



        return head;
        
    }
};