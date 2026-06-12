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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == NULL)
    return NULL;
        vector<int>v;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        k%=v.size();
        for(int j=1;j<=k;j++)
        {
        int t=v[v.size()-1];
        for(int i=v.size()-1;i>0;i--)
        {
            v[i]=v[i-1];
        }
        v[0]=t;
        }
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