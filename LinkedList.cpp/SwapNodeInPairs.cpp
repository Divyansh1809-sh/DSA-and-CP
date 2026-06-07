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
    ListNode* swapPairs(ListNode* head)
    {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }   
        if(v.size()%2==0)
        {
            for(int i=0;i<v.size();i=i+2)
            {
                int t=v[i];
                v[i]=v[i+1];
                v[i+1]=t;
            }
        } 
        else
        {
            for(int i=0;i<v.size()-1;i=i+2)
            {
                int t=v[i];
                v[i]=v[i+1];
                v[i+1]=t;
            }
        }
        if(v.empty()) return NULL;
        ListNode* nhead = new ListNode(v[0]);
        ListNode* mover = nhead;

        for(int i = 1; i < v.size(); i++)
        {
            mover->next = new ListNode(v[i]);
            mover = mover->next;
        }

        return nhead;
    }
};