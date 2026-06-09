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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL)
         return NULL;
        vector<int>o;
        vector<int>e;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            if(c%2==0)
            o.push_back(temp->val);
            else
            e.push_back(temp->val);
            temp=temp->next;
            c++;
        } 
        o.insert( o.end(), e.begin(), e.end() );
        ListNode* h=new ListNode(o[0]);
        ListNode* m=h;
        for(int i=1;i<o.size();i++)
        {
            ListNode* t=new ListNode(o[i]);
            m->next=t;
            m=t;
        }
        return h;
    }
};