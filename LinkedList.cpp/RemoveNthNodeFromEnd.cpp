
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==nullptr)
        return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {
            cnt++;
            temp=temp->next;
        }
        int k=cnt-n+1;
        if(k==1)
        {
            head=head->next;
            return head;
        }
        temp=head;
        ListNode* prev=nullptr;
        int c=0;
        while(temp!=nullptr)
        {
            c++;
            if(c==k)
            {
                prev->next=prev->next->next;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};