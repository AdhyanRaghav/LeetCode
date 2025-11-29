class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int k=0;

        ListNode* temp=head;


        while(temp!=NULL){
            k++;
            temp=temp->next;
        }

        int r=k-(n+1);

        if(r<0){
            head=head->next;
        }else if(r==0 && n==1){
            head->next=NULL;
        }else{

            temp=head;

            int i=0;
       
            while(temp!=NULL && i<r){
                i++;
                temp=temp->next;
            }

        temp->next=temp->next->next;
        }
        return head;
    }
};