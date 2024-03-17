class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *d=head;
        ListNode *dummy=new ListNode(-1000);
        dummy->next=d;
        d=dummy;
        while(n)
        {
            d=d->next;
            n--;
        }
        ListNode *s=dummy;
        while(d->next)
        {
            // if(d==NULL)
            //     break;
            d=d->next;
            s=s->next;
        }
        
        s->next=s->next->next;
        return dummy->next;
    }
};