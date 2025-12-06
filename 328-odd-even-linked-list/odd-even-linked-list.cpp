class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        ListNode* odd=NULL;

        if(head==NULL){
            odd=NULL;
        }else{
            odd=head;
            if(odd->next!=NULL){
                ListNode* even=head->next;

                if(even->next!=NULL){
                    ListNode* t1=even->next;
                    if(t1->next!=NULL){
                        ListNode* t2=t1->next;

                        odd->next=t1;
                        even->next=t2;

                        while(t1->next!=NULL && t2->next!=NULL){
                            if(t2->next!=NULL){
                                t1->next=t2->next;
                                t1=t1->next;
                            }
                            if(t1->next!=NULL){
                                t2->next=t1->next;
                                t2=t2->next;
                            }
                        }  
                        if(t1->next==NULL){
                            t2->next=NULL;
                        }
                        t1->next=even;
                    }else{
                        odd->next=t1;
                        t1->next=even;
                        even->next=NULL;
                    }
                }
                
            }
        }
        
        return odd;
    }
};