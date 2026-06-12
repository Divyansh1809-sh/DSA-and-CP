#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head)
    {
        if(head==NULL|| head->next == NULL)
        return NULL;
        ListNode* temp=head;
        int c=0;
        while(temp!=0) 
        {
            c++;
            temp=temp->next;
        } 
        int mid=(c/2)+1;
        int cnt=0;
        temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL)
        {
            cnt++;
            if(cnt==mid)
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