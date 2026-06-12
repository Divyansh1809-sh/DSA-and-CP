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
    ListNode* sortList(ListNode* head)
    {
        if(head==NULL)
        return NULL;
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode* h=new ListNode(v[0]);
        ListNode* m=h;
        for(int i=1;i<v.size();i++)
        {
            ListNode* t=new ListNode(v[i]);
            m->next=t;
            m=t;
        }
        return h;
    }
};