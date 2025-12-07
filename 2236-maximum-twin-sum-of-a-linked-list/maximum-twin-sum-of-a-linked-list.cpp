class Solution {
public:
    int pairSum(ListNode* head) {

        vector<int>arr;

        int sum=0;

        while(head){
            arr.push_back(head->val);
            head=head->next;
        }

        int i=0;
        int j=arr.size()-1;

        while(i<j){
            sum=max(sum,arr[i]+arr[j]);
            i++;
            j--;
        }

        return sum;
        
    }
};