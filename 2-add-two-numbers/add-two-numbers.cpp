class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        int carry=0;

        while(l1!=NULL || l2!=NULL || carry!=0){
            int d1=(l1!=NULL) ? l1->val : 0;
            int d2=(l2!=NULL) ? l2->val : 0;

            int sum=d1+d2+carry;

            carry=sum/10;

            int digit=sum%10;

            curr->next=new ListNode(digit);
            curr=curr->next;

            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
        }

        return dummy->next;
    }
};